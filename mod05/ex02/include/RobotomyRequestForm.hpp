/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:53:42 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/01 13:46:58 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include "AForm.hpp"
#include "utils.h"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
  public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    ~RobotomyRequestForm(void);

    const std::string &getTarget(void) const;
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    virtual void execute(const Bureaucrat &executor) const;

  private:
    std::string _target;
};
