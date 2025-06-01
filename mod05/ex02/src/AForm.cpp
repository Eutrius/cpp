/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:51:12 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/01 13:56:28 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("AForm"), _gradeToSign(42), _gradeToExecute(42), _status(false)
{
}

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute)
    : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _status(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
    : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute),
      _status(other._status)
{
}

AForm::~AForm(void)
{
}

AForm &AForm::operator=(const AForm &other)
{
    (void)other;
    return (*this);
}

const std::string &AForm::getName(void) const
{
    return (_name);
}

int AForm::getGradeToSign(void) const
{
    return (_gradeToSign);
}

int AForm::getGradeToExecute(void) const
{
    return (_gradeToSign);
}

bool AForm::getStatus(void) const
{
    return (_status);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else
        this->_status = true;
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
    return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
    return ("Grade too low!");
}

const char *AForm::FormNotSignedException::what(void) const throw()
{
    return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << "Name : ";
    os << form.getName();
    os << ", Grade to sign: ";
    os << form.getGradeToSign();
    os << ", Grade to execute: ";
    os << form.getGradeToExecute();
    os << ", Status: ";
    os << (form.getStatus() ? "Signed" : "Not Signed");
    return (os);
}
