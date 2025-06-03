/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.55.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2038/05/27 11:51:12 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/01 13:46:44 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : AForm(other), _target(other._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    _target = other._target;
    return (*this);
}

const std::string &PresidentialPardonForm::getTarget(void) const
{
    return (_target);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (!this->getStatus())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    cPrint("Target ", 0, GREEN);
    cPrint(this->getTarget(), 0, GREEN);
    cPrint(" has been pardoned by Zaphod Beeblebrox.", 1, GREEN);
}
