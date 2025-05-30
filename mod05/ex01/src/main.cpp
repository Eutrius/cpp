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
    std::cout << std::endl;
    cPrint("*** Bureaucrat Test ***", 1, BLUE);
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
        cPrint("increment", 1, YELLOW);
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

    std::cout << std::endl;
    cPrint("*** Form Test ***", 1, BLUE);
    Form *form;

    try
    {
        std::cout << std::endl;
        cPrint(" * Test gradeToSign too high! * ", 1, GREEN);
        form = new Form("Form", 0, 150);
        std::cout << *form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test gradeToExecute too high! * ", 1, GREEN);
        form = new Form("Form", 150, 0);
        std::cout << *form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test gradeToSign too low! * ", 1, GREEN);
        form = new Form("Form", 151, 1);
        std::cout << *form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test gradeToExecute too low! * ", 1, GREEN);
        form = new Form("Form", 1, 151);
        std::cout << *form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        cPrint(" * Test valid form! * ", 1, GREEN);
        form = new Form("Form", 1, 1);
        std::cout << *form << std::endl;
        delete form;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    cPrint(" * Test valid form! * ", 1, GREEN);
    me = new Bureaucrat("Vincent", 2);
    form = new Form("ExecutiveOrder", 1, 1);
    std::cout << *me << std::endl;
    std::cout << *form << std::endl;
    std::cout << std::endl;
    cPrint("1st attempt", 1, YELLOW);
    me->signForm(*form);
    try
    {
        std::cout << std::endl;
        cPrint("increment", 1, YELLOW);
        me->incrementGrade();
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    cPrint("2nd attempt", 1, YELLOW);
    me->signForm(*form);
    std::cout << *form << std::endl;

    delete (me);
    delete (form);

    return (0);
}
