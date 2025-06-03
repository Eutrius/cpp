/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:51:12 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/27 14:29:59 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Form"), _gradeToSign(42), _gradeToExecute(42), _status(false)
{
}

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute)
    : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _status(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
    : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute),
      _status(other._status)
{
}

Form::~Form(void)
{
}

Form &Form::operator=(const Form &other)
{
    (void)other;
    return (*this);
}

const std::string &Form::getName(void) const
{
    return (_name);
}

int Form::getGradeToSign(void) const
{
    return (_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
    return (_gradeToExecute);
}

bool Form::getStatus(void) const
{
    return (_status);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else
        this->_status = true;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade too high!");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &os, const Form &form)
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
