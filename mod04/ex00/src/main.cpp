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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
    const Animal *animal = new Animal();
    std::cout << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    std::cout << std::endl;
    const Animal *dog = new Dog();
    std::cout << std::endl;
    const Animal *cat = new Cat();
    std::cout << std::endl;
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    animal->makeSound();
    wrongAnimal->makeSound();
    dog->makeSound();
    std::cout << std::endl;

    cat->makeSound();
    wrongCat->makeSound();

    std::cout << std::endl;
    delete (animal);
    std::cout << std::endl;
    delete (cat);
    std::cout << std::endl;
    delete (dog);
    std::cout << std::endl;
    delete (wrongCat);
    std::cout << std::endl;
    return (0);
}
