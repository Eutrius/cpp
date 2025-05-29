/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:00:35 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/27 14:19:32 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "utils.h"

int main(void)
{
    Bureaucrat *me;
    try
    {
        std::cout << std::endl;
        cPrint(" * Test grade too high! * ", 1, GREEN);
        me = new Bureaucrat("Vincent", -1);
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test grade too low! * ", 1, GREEN);
        me = new Bureaucrat("Vincent", 151);
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test valid grade! * ", 1, GREEN);
        me = new Bureaucrat("Vincent", 1);
        std::cout << *me << std::endl;
        delete me;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test invalid increment! * ", 1, GREEN);
        me = new Bureaucrat("Vincent", 1);
        std::cout << *me << std::endl;
        me->incrementGrade();
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        std::cout << *me << std::endl;
        delete me;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test invalid decrement! * ", 1, GREEN);
        me = new Bureaucrat("Vincent", 150);
        std::cout << *me << std::endl;
        me->decrementGrade();
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        std::cout << *me << std::endl;
        delete me;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test everything valid * ", 1, GREEN);
        cPrint("construction", 1, YELLOW);
        me = new Bureaucrat("Vincent", 5);
        std::cout << *me << std::endl;
        cPrint("incremet", 1, YELLOW);
        me->incrementGrade();
        std::cout << *me << std::endl;
        cPrint("decrement", 1, YELLOW);
        me->decrementGrade();
        std::cout << *me << std::endl;
        std::cout << std::endl;
        delete me;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
