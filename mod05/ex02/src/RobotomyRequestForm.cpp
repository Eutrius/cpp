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
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
    (void)other;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    (void)other;
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
    std::srand(std::time(0));

    if (std::rand() % 2)
    {
        cPrint("Target ", 0, GREEN);
        cPrint(this->getTarget(), 0, GREEN);
        cPrint(" has been robotomized successfully", 1, GREEN);
    }
    else
        cPrint("Robotomy has failed.", 1, RED);
}
