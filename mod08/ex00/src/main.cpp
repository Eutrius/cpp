/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:25:32 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/17 01:09:47 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <vector>

#include "easyfind.hpp"
#include "utils.h"

int main(void)
{
	std::cout << std::endl;
	cPrint(" * Test with std::vector<int> * ", 1, GREEN);
	std::vector<int> vector;
	std::vector<int>::iterator vectorIter;
	for (int i = 0; i < 10; ++i)
		vector.push_back(i * 2);

	try
	{
		vectorIter = easyfind(vector, 2);
		std::cout << "Found: " << *vectorIter << std::endl;
		vectorIter = easyfind(vector, 4);
		std::cout << "Found: " << *vectorIter << std::endl;
		vectorIter = easyfind(vector, 6);
		std::cout << "Found: " << *vectorIter << std::endl;
		vectorIter = easyfind(vector, 7);
		std::cout << "Found: " << *vectorIter << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test with std::list<int> * ", 1, GREEN);
	std::list<int> list;
	std::list<int>::iterator listIter;
	list.push_back(10);
	list.push_back(20);
	list.push_back(30);

	try
	{
		listIter = easyfind(list, 10);
		std::cout << "Found: " << *listIter << std::endl;
		listIter = easyfind(list, 20);
		std::cout << "Found: " << *listIter << std::endl;
		listIter = easyfind(list, 99);
		std::cout << "Found: " << *listIter << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test with empty std::deque<int> * ", 1, GREEN);
	std::deque<int> deque;
	std::deque<int>::iterator dequeIter;

	try
	{
		dequeIter = easyfind(deque, 1);
		std::cout << "Found: " << *dequeIter << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	cPrint(" * Test with std::set<int> * ", 1, GREEN);
	std::set<int> set;
	std::set<int>::const_iterator setIter;
	for (int i = 0; i < 10; ++i)
		set.insert(i * 3);

	try
	{
		setIter = easyfind(set, 9);
		std::cout << "Found: " << *setIter << std::endl;
		setIter = easyfind(set, 8);
		std::cout << "Found: " << *setIter << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
