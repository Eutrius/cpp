/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:35:40 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/15 14:39:35 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

static void printTitle(const std::string &title)
{
    std::cout << "\n=== " << title << " ===\n";
}

int main(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));

    try
    {
        printTitle("Basic test with 100000 numbers");
        Span span(100000);
        std::vector<int> nums;
        nums.reserve(100000);
        for (int i = 0; i < 100000; ++i)
            nums.push_back(std::rand());
        span.addNumbers(nums);
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error during 100000 test: " << e.what() << std::endl;
    }

    try
    {
        printTitle("Error: calling shortestSpan() with no numbers");
        Span s(5);
        std::cout << s.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }

    try
    {
        printTitle("Error: calling longestSpan() with one number");
        Span s(3);
        s.addNumber(42);
        std::cout << s.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }

    try
    {
        printTitle("Error: addNumber() past max capacity");
        Span s(2);
        s.addNumber(1);
        s.addNumber(2);
        s.addNumber(3);
    }
    catch (std::exception &e)
    {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }

    try
    {
        printTitle("Error: addNumbers() causing overflow");
        Span s(3);
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        s.addNumbers(v);
    }
    catch (std::exception &e)
    {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }

    try
    {
        printTitle("Test with all identical numbers (span should be 0)");
        Span s(5);
        for (int i = 0; i < 5; ++i)
            s.addNumber(42);
        std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << s.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        printTitle("Test with mixed positive and negative numbers");
        Span s(6);
        s.addNumber(-10);
        s.addNumber(20);
        s.addNumber(5);
        s.addNumber(-5);
        s.addNumber(0);
        s.addNumber(30);
        std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
        std::cout << "Longest span:  " << s.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return (0);
}
