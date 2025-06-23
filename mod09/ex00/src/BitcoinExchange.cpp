/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:24:25 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/22 13:11:46 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <stdexcept>

static bool isAllDigits(const std::string &str);
static bool isDateValid(const std::string &date);
static bool isValueValid(const std::string &str);
static std::pair<std::string, float> processLine(const std::string &line);

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const std::string &datafile)
{
	std::ifstream file(datafile.c_str());

	if (!file)
		throw std::runtime_error("Error: cannot open data file " + datafile);

	std::string line;
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Error: data file corrupted");

	while (std::getline(file, line))
	{
		size_t cPosition = line.find(',');
		if (cPosition == std::string::npos)
			throw std::runtime_error("Error: data file corrupted");

		std::string date = line.substr(0, cPosition);
		if (!isDateValid(date))
			throw std::runtime_error("Error: invalid date on data file");

		float value = std::atof(line.substr(cPosition + 1).c_str());
		if (value < 0)
			throw std::runtime_error("Error: invalid bitcoin value less than 0");
		_data[date] = value;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _data(other._data)
{
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	_data = other._data;
	return (*this);
}

void BitcoinExchange::exchange(const std::string &line)
{
	std::pair<std::string, float> validLine;
	try
	{
		validLine = processLine(line);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return;
	}
	std::map<std::string, float>::iterator it = _data.lower_bound(validLine.first);
	std::cout << validLine.first << " => " << validLine.second << " = ";
	if (it == _data.end() || it->first != validLine.first)
	{
		if (it == _data.begin())
			validLine.second = 0;
		else
			--it;
	}
	std::cout << validLine.second * it->second << std::endl;
}

static std::pair<std::string, float> processLine(const std::string &line)
{
	if (std::count(line.begin(), line.end(), '|') != 1)
		throw std::runtime_error("Error: bad input => " + line);

	if (std::count(line.begin(), line.end(), ' ') != 2)
		throw std::runtime_error("Error: bad input => " + line);

	size_t firstPos = line.find_first_of(' ');
	size_t lastPos = line.find_last_of(' ');
	std::string date = line.substr(0, firstPos);
	std::string value = line.substr(lastPos + 1);

	if (!isDateValid(date) || !isValueValid(value))
		throw std::runtime_error("Error: bad input => " + line);

	float fvalue = std::atof(value.c_str());
	if (fvalue < 0)
		throw std::runtime_error("Error: not a positive number.");
	if (fvalue > 1000)
		throw std::runtime_error("Error: too large a number.");

	return (std::pair<std::string, float>(date, fvalue));
}

static bool isDateValid(const std::string &date)
{
	if (std::count(date.begin(), date.end(), '-') != 2)
		return (false);

	size_t firstPos = date.find_first_of('-');
	size_t lastPos = date.find_last_of('-');
	std::string year = date.substr(0, firstPos);
	std::string month = date.substr(firstPos + 1, lastPos - firstPos - 1);
	std::string day = date.substr(lastPos + 1);

	if (!isAllDigits(year) || !isAllDigits(month) || !isAllDigits(day))
		return (false);

	int y = std::atoi(year.c_str());
	int m = std::atoi(month.c_str());
	int d = std::atoi(day.c_str());

	if (m < 1 || m > 12 || d < 1 || d > 31)
		return (false);

	struct tm timeStruct = {};
	timeStruct.tm_year = y - 1900;
	timeStruct.tm_mon = m - 1;
	timeStruct.tm_mday = d;

	if (mktime(&timeStruct) == -1)
		return (false);

	return (timeStruct.tm_year == y - 1900 && timeStruct.tm_mon == m - 1 && timeStruct.tm_mday == d);
}

static bool isValueValid(const std::string &str)
{
	if (str.empty())
		return (false);

	std::string::const_iterator begin = str.begin();
	if (*begin == '+' || *begin == '-')
		begin++;

	bool dotFlog = false;
	for (std::string::const_iterator it = begin; it != str.end(); ++it)
	{
		if (*it == '.')
		{
			if (dotFlog)
				return (false);
			dotFlog = true;
			continue;
		}

		if (!std::isdigit(*it))
			return (false);
	}

	return (true);
}

static bool isAllDigits(const std::string &str)
{
	if (str.empty())
		return (false);

	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!std::isdigit(*it))
			return (false);
	}
	return (true);
}
