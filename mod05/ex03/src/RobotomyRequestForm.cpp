/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.55.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2038/05/27 11:51:12 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/01 13:46:44 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
    std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
    std::srand(std::time(0));
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    _target = other._target;
    return (*this);
}

const std::string &RobotomyRequestForm::getTarget(void) const
{
    return (_target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!this->getStatus())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();

    if (std::rand() % 2)
    {
        cPrint("Target ", 0, GREEN);
        cPrint(this->getTarget(), 0, GREEN);
        cPrint(" has been robotomized successfully", 1, GREEN);
    }
    else
        cPrint("Robotomy has failed.", 1, RED);
}
