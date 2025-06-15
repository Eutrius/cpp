/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:18:17 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/15 12:17:42 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <vector>

int main(void)
{
    try
    {
        int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        size_t n = sizeof(arr) / sizeof(arr[0]);

        std::vector<int> vec(arr, arr + n);
        std::cout << "vector: " << *easyfind(vec, 20) << std::endl;

        std::list<int> lst(arr, arr + n);
        std::cout << "list: " << *easyfind(lst, 30) << std::endl;

        std::deque<int> deq(arr, arr + n);
        std::cout << "deque: " << *easyfind(deq, 40) << std::endl;

        std::set<int> st(arr, arr + n);
        std::cout << "set: " << *easyfind(st, 50) << std::endl;

        std::multiset<int> mst(arr, arr + n);
        std::cout << "multiset: " << *easyfind(mst, 10) << std::endl;

        easyfind(vec, 42);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return (0);
}
