/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:18:50 by jyriarte          #+#    #+#             */
/*                                                                            */
/*   Updated: 2025/06/21 15:14:44 by jyriarte         ###   ########.fr       */
/* ************************************************************************** */

#include <climits>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <iostream>
#include <set>
#include <sstream>
#include <vector>
#include "PmergeMe.hpp"

static int parseNum(const std::string &num);
static double calculateTime(std::clock_t start);
static void printTimes(double vecTime, double dequeTime, int size);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	std::set<int> control;
	std::vector<int> vec;
	std::deque<int> deque;

	int value;
	for (int i = 1; i < argc; i++)
	{
		try
		{
			value = parseNum(argv[i]);
			std::pair<std::set<int>::iterator, bool> res = control.insert(value);
			if (!res.second)
				throw std::invalid_argument("Error: duplicate input");
			vec.push_back(value);
			deque.push_back(value);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			return (1);
		}
	}

	std::cout << "Before: ";
	for (int i = 1; i < argc; i++)
	{
		std::cout << std::atoi(argv[i]) << " ";
	}

	std::cout << std::endl;
	std::cout << "After:  ";
	for (std::set<int>::iterator it = control.begin(); it != control.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::clock_t start = std::clock();
	double vecTime;
	double dequeTime;
	PmergeMe::sortVec(vec);
	vecTime = calculateTime(start);
	start = std::clock();
	PmergeMe::sortDeque(deque);
	dequeTime = calculateTime(start);

	// std::cout << "Vector : ";
	// for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << std::endl;
	//
	// std::cout << "Deque  : ";
	// for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << std::endl;

	printTimes(vecTime, dequeTime, argc - 1);
	return (0);
}

static void printTimes(double vecTime, double dequeTime, int size)
{
	std::cout << "Time to process a range of " << size << " elements with std::vector : " << vecTime << " µs\n";
	std::cout << "Time to process a range of " << size << " elements with std::deque  : " << dequeTime << " µs";
	std::cout << std::endl;
}

static double calculateTime(std::clock_t start)
{
	std::clock_t end = std::clock();
	double time = static_cast<double>(end - start) * 1e6 / CLOCKS_PER_SEC;
	return (time);
}

static int parseNum(const std::string &num)
{
	std::stringstream ss;
	ss << num;
	long value;
	ss >> value;

	if (ss.fail() || !ss.eof() || value < 0 || value > INT_MAX)
		throw std::invalid_argument("Error");

	return (static_cast<int>(value));
}
