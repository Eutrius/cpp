/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:00:35 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/01 13:56:00 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "utils.h"

int main(void)
{
    cPrint("*** AForm Test ***", 1, BLUE);

    try
    {
        std::cout << std::endl;
        cPrint(" * Test invalid decrement! * ", 1, GREEN);
        Bureaucrat me("Me", 1);
        std::cout << me << std::endl;
        AForm *form = new RobotomyRequestForm("hello");
        std::cout << *form << std::endl;
        me.signForm(*form);
        std::cout << *form << std::endl;
        me.executeForm(*form);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
