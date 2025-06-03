/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:51:12 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/03 12:36:04 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern::~Intern(void)
{
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}
AForm *Intern::makeForm(const std::string &formName, const std::string target)
{
    static const std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon",
    };
    int index = 2;
    while (index > -1)
    {
        if (formNames[index] == formName)
            break;
        index--;
    }
    AForm *form = NULL;
    switch (index)
    {
    case 0:
        form = (new ShrubberyCreationForm(target));
        break;
    case 1:
        form = (new RobotomyRequestForm(target));
        break;
    case 2:
        form = (new PresidentialPardonForm(target));
        break;
    }
    if (form)
        std::cout << "Intern creates " << form->getName() << std::endl;
    else
        std::cout << "Form " << formName << " doesn't exist" << std::endl;
    return (form);
}
