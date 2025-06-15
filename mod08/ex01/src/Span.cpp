/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:40:22 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/15 14:38:12 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

const std::string Span::ERR_FULL = "Span: span full";
const std::string Span::ERR_NO_SPAN = "Span: no span found";
const std::string Span::ERR_INV_SIZE = "Span: invalid span size";
static std::vector<int> calculateSpans(std::vector<int> container);

Span::Span(void)
{
}

Span::Span(unsigned int n) : _maxSize(n)
{
    if (n <= 1)
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

    std::vector<int> spans = calculateSpans(_container);
    std::vector<int>::iterator span = std::min_element(spans.begin(), spans.end());

    return (*span);
}

unsigned int Span::longestSpan(void)
{
    if (_container.size() <= 1)
        throw std::runtime_error(Span::ERR_NO_SPAN);

    std::vector<int> spans = calculateSpans(_container);
    std::vector<int>::iterator span = std::max_element(spans.begin(), spans.end());

    return (*span);
}

static std::vector<int> calculateSpans(std::vector<int> container)
{
    std::sort(container.begin(), container.end());
    std::vector<int> spans(container.size());
    std::adjacent_difference(container.begin(), container.end(), spans.begin());

    return (std::vector<int>(spans.begin() + 1, spans.end()));
}
