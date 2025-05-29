/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:51:12 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/27 14:29:59 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(42)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    _grade = other._grade;
    return (*this);
}

const std::string &Bureaucrat::getName(void) const
{
    return (_name);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade too low!");
}

void Bureaucrat::incrementGrade(void)
{
    if (_grade == 1)
        throw GradeTooHighException();
    else
        _grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
    if (_grade == 150)
        throw GradeTooLowException();
    else
        _grade += 1;
}

void Bureaucrat::signForm(AForm *form)
{
    try
    {
        form->beSigned(*this);
        std::cout << this->getName();
        std::cout << " signed ";
        std::cout << form->getName();
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->getName();
        std::cout << " couldn't sign ";
        std::cout << form->getName();
        std::cout << " because ";
        std::cout << e.what();
        std::cout << ".";
        std::cout << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName();
    os << ", bureaucrat grade ";
    os << bureaucrat.getGrade();
    return (os);
}
