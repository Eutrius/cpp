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

#include "Intern.hpp"

int main(void)
{
    cPrint(" *** AForm Test Suite *** ", 1, BLUE);
    std::cout << std::endl;

    {
        cPrint(" * Intern Form Creation Test * ", 1, GREEN);

        Intern intern;

        std::string formTypes[] = {"shrubbery creation", "robotomy request", "presidential pardon", "nonexistent form"};

        for (int i = 0; i < 4; ++i)
        {
            std::cout << std::endl;
            std::cout << "Attempting to create: \"" << formTypes[i] << "\"" << std::endl;
            AForm *form = intern.makeForm(formTypes[i], "Target");
            if (form)
                delete form;
        }
    }

    {
        std::cout << std::endl;
        cPrint(" * ShrubberyCreationForm Test * ", 1, GREEN);

        Intern intern;
        AForm *form = intern.makeForm("shrubbery creation", "Garden");

        Bureaucrat lowGrade("LowGrade", 150);
        Bureaucrat signer("ShrubberySigner", 145);
        Bureaucrat executor("ShrubberyExecutor", 137);

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

        Intern intern;
        AForm *form = intern.makeForm("robotomy request", "Bender");

        Bureaucrat lowGrade("LowGrade", 150);
        Bureaucrat signer("RobotomySigner", 72);
        Bureaucrat executor("RobotomyExecutor", 45);

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

        Intern intern;
        AForm *form = intern.makeForm("presidential pardon", "Arthur Dent");

        Bureaucrat lowGrade("LowGrade", 150);
        Bureaucrat signer("PardonSigner", 25);
        Bureaucrat executor("PardonExecutor", 5);

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
