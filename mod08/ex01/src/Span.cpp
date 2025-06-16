/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:40:22 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/17 01:03:20 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>

const std::string Span::ERR_FULL = "Span: span full";
const std::string Span::ERR_NO_SPAN = "Span: no span found";
const std::string Span::ERR_INV_SIZE = "Span: invalid span size";

Span::Span(void)
{
}

Span::Span(unsigned int n) : _maxSize(n)
{
	if (n == 0)
		throw std::runtime_error(Span::ERR_INV_SIZE);
	_container.reserve(n);
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span(void)
{
}

Span &Span::operator=(const Span &other)
{
	_maxSize = other._maxSize;
	_container = other._container;
	return (*this);
}

void Span::addNumber(int num)
{
	if (_container.size() == _maxSize)
		throw std::runtime_error(Span::ERR_FULL);
	_container.push_back(num);
}

void Span::addNumbers(std::vector<int> &nums)
{
	if (_container.size() + nums.size() > _maxSize)
		throw std::runtime_error(Span::ERR_FULL);
	_container.insert(_container.end(), nums.begin(), nums.end());
}

unsigned int Span::shortestSpan(void)
{
	if (_container.size() <= 1)
		throw std::runtime_error(Span::ERR_NO_SPAN);

	std::vector<int> sorted_container(_container);
	std::sort(sorted_container.begin(), sorted_container.end());

	std::vector<int> spans(sorted_container.size() - 1);
	std::adjacent_difference(sorted_container.begin(), sorted_container.end(), spans.begin());

	std::vector<int>::iterator min_span = std::min_element(spans.begin() + 1, spans.end());
	return (*min_span);
}

unsigned int Span::longestSpan(void)
{
	if (_container.size() <= 1)
		throw std::runtime_error(Span::ERR_NO_SPAN);

	std::vector<int>::iterator min = std::min_element(_container.begin(), _container.end());
	std::vector<int>::iterator max = std::max_element(_container.begin(), _container.end());
	return (*max - *min);
}
