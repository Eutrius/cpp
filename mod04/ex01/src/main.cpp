/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:48:50 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 16:29:59 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main(void)
{
    std::cout << std::endl;
    cPrint("########## DEFAULT TEST ##########", 1, CYAN);
    std::cout << std::endl;
    const Animal *j = new Dog();
    std::cout << std::endl;
    const Animal *i = new Cat();
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;
    cPrint("##################################", 1, CYAN);
    std::cout << std::endl;

    Animal *animals[10];
    std::cout << std::endl;
    cPrint("########### ARRAY TEST ###########", 1, CYAN);
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    std::cout << std::endl;
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    std::cout << std::endl;
    cPrint("##################################", 1, CYAN);
    std::cout << std::endl;
    return (0);
}
