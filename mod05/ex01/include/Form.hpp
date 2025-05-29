/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:00:22 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/27 14:30:03 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
  public:
    Form(void);
    Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
    Form(const Form &other);
    ~Form(void);

    Form &operator=(const Form &other);

    const std::string &getName(void) const;
    bool getStatus(void) const;
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const;
    void beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
      public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception
    {
      public:
        virtual const char *what(void) const throw();
    };

  private:
    const std::string _name;
    const int _gradeToSign;
    const int _gradeToExecute;
    bool _status;
};

std::ostream &operator<<(std::ostream &os, const Form &form);
