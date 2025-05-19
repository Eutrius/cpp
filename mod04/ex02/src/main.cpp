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
	// Animal a;
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
        animals[i]->makeSound();
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    std::cout << std::endl;
    cPrint("##################################", 1, CYAN);
    std::cout << std::endl;

    cPrint("########### COPY  TEST ###########", 1, CYAN);
    std::cout << std::endl;

    Dog *originalDog = new Dog();
    Dog cloneDog = *originalDog;
    Dog *cloneDog2 = new Dog(*originalDog);
    std::cout << std::endl;

    std::cout << originalDog->getBrainPtr() << std::endl;
    std::cout << cloneDog.getBrainPtr() << std::endl;
    std::cout << cloneDog2->getBrainPtr() << std::endl;

    std::cout << std::endl;
    Cat *originalCat = new Cat();
    Cat cloneCat = *originalCat;
    Cat *cloneCat2 = new Cat(*originalCat);
    std::cout << std::endl;

    std::cout << originalCat->getBrainPtr() << std::endl;
    std::cout << cloneCat.getBrainPtr() << std::endl;
    std::cout << cloneCat2->getBrainPtr() << std::endl;
    std::cout << std::endl;

    delete originalDog;
    delete cloneDog2;
    delete originalCat;
    delete cloneCat2;
    return (0);
}
