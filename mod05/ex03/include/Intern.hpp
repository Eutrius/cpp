/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:00:22 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/03 12:36:31 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

class AForm;

class Intern
{
  public:
    Intern(void);
    Intern(const Intern &other);
    ~Intern(void);

    Intern &operator=(const Intern &other);

    AForm *makeForm(const std::string &formName, const std::string target);
};
