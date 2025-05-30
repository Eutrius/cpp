/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
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

class PresidentialPardonForm : public AForm
{
  public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    ~PresidentialPardonForm(void);

    const std::string &getTarget(void) const;
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    virtual void execute(const Bureaucrat &executor) const;

  private:
    const std::string _target;
};
