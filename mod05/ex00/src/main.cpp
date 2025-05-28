/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:00:35 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/27 14:19:32 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *me;

    /*me = new Bureaucrat("me", -1);*/
    /*std::cout << *me << std::endl;*/

    try
    {
        me = new Bureaucrat("me", -1);
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        me = new Bureaucrat("me", 151);
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        me = new Bureaucrat("me", 1);
        std::cout << *me << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
