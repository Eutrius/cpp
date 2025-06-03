/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:53:42 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/29 17:19:29 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include "AForm.hpp"
#include "utils.h"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
  public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm(void);

    const std::string &getTarget(void) const;
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    virtual void execute(const Bureaucrat &executor) const;

  private:
    std::string _target;
};
