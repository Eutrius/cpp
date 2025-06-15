/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:21:58 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/15 14:34:10 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <numeric>
#include <stdexcept>
#include <string>
#include <vector>

class Span
{
  public:
    Span(unsigned int n);
    Span(const Span &other);
    ~Span(void);

    Span &operator=(const Span &other);

    void addNumber(int num);
    void addNumbers(std::vector<int> &nums);
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);

    static const std::string ERR_FULL;
    static const std::string ERR_NO_SPAN;
    static const std::string ERR_INV_SIZE;

  private:
    Span(void);

    unsigned int _maxSize;
    std::vector<int> _container;
};
