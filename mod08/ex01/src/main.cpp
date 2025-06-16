/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:50:12 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/17 01:03:31 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "Span.hpp"
#include "utils.h"

int main(void)
{
	std::cout << std::endl;
	cPrint(" * Test basic add and span * ", 1, GREEN);
	try
	{
		Span span(5);
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);

		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << span.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test overflow * ", 1, GREEN);
	try
	{
		Span span(2);
		span.addNumber(1);
		span.addNumber(2);
		span.addNumber(3);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test invalid size * ", 1, GREEN);
	try
	{
		Span span(0);
		span.addNumber(1);
		span.addNumber(2);
		span.addNumber(3);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test with insufficient numbers * ", 1, GREEN);
	try
	{
		Span span(3);
		span.addNumber(42);
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test bulk add with addNumbers * ", 1, GREEN);
	try
	{
		Span span(6);
		std::vector<int> nums;
		nums.push_back(10);
		nums.push_back(20);
		nums.push_back(30);
		nums.push_back(40);
		nums.push_back(50);
		nums.push_back(60);

		span.addNumbers(nums);

		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << span.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test bulk add overflow * ", 1, GREEN);
	try
	{
		Span span(3);
		std::vector<int> nums;
		nums.push_back(1);
		nums.push_back(2);
		nums.push_back(3);
		nums.push_back(4);

		span.addNumbers(nums);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test with 42,000 numbers * ", 1, GREEN);
	try
	{
		const int size = 42000;
		Span span(size);
		for (int i = 0; i < size; ++i)
			span.addNumber(i * 3);

		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << span.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
