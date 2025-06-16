/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 01:25:00 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/17 01:08:44 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "MutantStack.hpp"
#include "utils.h"

int main(void)
{
	std::cout << std::endl;
	cPrint(" * Test basic stack operations * ", 1, GREEN);
	try
	{
		MutantStack<int> mutantStack;

		mutantStack.push(5);
		mutantStack.push(17);
		std::cout << "Top: " << mutantStack.top() << std::endl;

		mutantStack.pop();
		std::cout << "Size after pop: " << mutantStack.size() << std::endl;

		mutantStack.push(3);
		mutantStack.push(5);
		mutantStack.push(737);
		mutantStack.push(0);
		std::cout << "Top after more pushes: " << mutantStack.top() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test forward iteration * ", 1, GREEN);
	try
	{
		MutantStack<int> mutantStack;
		for (int i = 0; i < 10; ++i)
			mutantStack.push(i);

		MutantStack<int>::iterator it = mutantStack.begin();
		MutantStack<int>::iterator ite = mutantStack.end();

		std::cout << "Iterating from bottom to top:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test reverse iteration * ", 1, GREEN);
	try
	{
		MutantStack<int> mutantStack;
		for (int i = 1; i <= 5; ++i)
			mutantStack.push(i * 10);

		MutantStack<int>::reverse_iterator rit = mutantStack.rbegin();
		MutantStack<int>::reverse_iterator rite = mutantStack.rend();

		std::cout << "Iterating from top to bottom:" << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << " ";
			++rit;
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test const iterators * ", 1, GREEN);
	try
	{
		MutantStack<int> mutantStack;
		for (int i = 0; i < 5; ++i)
			mutantStack.push(i + 100);

		const MutantStack<int> constStack = mutantStack;

		MutantStack<int>::const_iterator cit = constStack.begin();
		MutantStack<int>::const_iterator cite = constStack.end();

		std::cout << "Const iterating:" << std::endl;
		while (cit != cite)
		{
			std::cout << *cit << " ";
			++cit;
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test with char type * ", 1, GREEN);
	try
	{
		MutantStack<char> cStack;
		std::string str = "stack";

		for (std::size_t i = 0; i < str.size(); ++i)
			cStack.push(str[i]);

		std::cout << "Characters in stack:" << std::endl;
		MutantStack<char>::iterator it = cStack.begin();
		MutantStack<char>::iterator ite = cStack.end();
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
