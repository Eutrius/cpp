/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:00:35 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/01 13:56:00 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    cPrint(" *** AForm Test Suite *** ", 1, BLUE);
    std::cout << std::endl;

    {
        cPrint(" * ShrubberyCreationForm Test * ", 1, GREEN);

        std::cout << std::endl;
        cPrint("Step 1: Initialization", 1, YELLOW);
        Bureaucrat lowGrade("LowGrade", 150);
        Bureaucrat signer("ShrubberySigner", 145);
        Bureaucrat executor("ShrubberyExecutor", 137);
        AForm *form = new ShrubberyCreationForm("Garden");

        std::cout << lowGrade << std::endl;
        std::cout << signer << std::endl;
        std::cout << executor << std::endl;
        std::cout << *form << std::endl;

        std::cout << std::endl;
        cPrint("Step 2: Invalid Cases", 1, YELLOW);
        try
        {
            lowGrade.signForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Signing Error: " << e.what() << std::endl;
        }

        try
        {
            executor.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error (unsigned): " << e.what() << std::endl;
        }

        try
        {
            lowGrade.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error (low grade): " << e.what() << std::endl;
        }

        std::cout << std::endl;
        cPrint("Step 3: Valid Signing and Execution", 1, YELLOW);
        try
        {
            signer.signForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Signing Error: " << e.what() << std::endl;
        }

        try
        {
            executor.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error: " << e.what() << std::endl;
        }

        delete form;
    }

    {
        std::cout << std::endl;
        cPrint(" * RobotomyRequestForm Test * ", 1, GREEN);

        std::cout << std::endl;
        cPrint("Step 1: Initialization", 1, YELLOW);
        Bureaucrat lowGrade("LowGrade", 150);
        Bureaucrat signer("RobotomySigner", 72);
        Bureaucrat executor("RobotomyExecutor", 45);
        AForm *form = new RobotomyRequestForm("Bender");

        std::cout << lowGrade << std::endl;
        std::cout << signer << std::endl;
        std::cout << executor << std::endl;
        std::cout << *form << std::endl;

        std::cout << std::endl;
        cPrint("Step 2: Invalid Cases", 1, YELLOW);
        try
        {
            lowGrade.signForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Signing Error: " << e.what() << std::endl;
        }

        try
        {
            executor.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error (unsigned): " << e.what() << std::endl;
        }

        try
        {
            lowGrade.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error (low grade): " << e.what() << std::endl;
        }

        std::cout << std::endl;
        cPrint("Step 3: Valid Signing and Execution", 1, YELLOW);
        try
        {
            signer.signForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Signing Error: " << e.what() << std::endl;
        }

        try
        {
            for (int i = 0; i < 3; ++i)
                executor.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error: " << e.what() << std::endl;
        }

        delete form;
    }

    {
        std::cout << std::endl;
        cPrint(" * PresidentialPardonForm Test * ", 1, GREEN);

        std::cout << std::endl;
        cPrint("Step 1: Initialization", 1, YELLOW);
        Bureaucrat lowGrade("LowGrade", 150);
        Bureaucrat signer("PardonSigner", 25);
        Bureaucrat executor("PardonExecutor", 5);
        AForm *form = new PresidentialPardonForm("Arthur Dent");

        std::cout << lowGrade << std::endl;
        std::cout << signer << std::endl;
        std::cout << executor << std::endl;
        std::cout << *form << std::endl;

        std::cout << std::endl;
        cPrint("Step 2: Invalid Cases", 1, YELLOW);
        try
        {
            lowGrade.signForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Signing Error: " << e.what() << std::endl;
        }

        try
        {
            executor.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error (unsigned): " << e.what() << std::endl;
        }

        try
        {
            lowGrade.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error (low grade): " << e.what() << std::endl;
        }

        std::cout << std::endl;
        cPrint("Step 3: Valid Signing and Execution", 1, YELLOW);
        try
        {
            signer.signForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Signing Error: " << e.what() << std::endl;
        }

        try
        {
            executor.executeForm(*form);
        }
        catch (const std::exception &e)
        {
            std::cout << "Execution Error: " << e.what() << std::endl;
        }

        delete form;
    }

    return (0);
}
