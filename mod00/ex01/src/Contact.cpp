/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:44:18 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/10 13:26:12 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
    first_name = trim_input(get_input("First Name: "));
    last_name = trim_input(get_input("Last Name: "));
    nickname = trim_input(get_input("Nickname: "));
    phone_number = get_phone_number();
    darkest_secret = trim_input(get_input("Darkest Secret: "));
}

Contact::~Contact()
{
}

std::string Contact::get_input(std::string prompt)
{
    std::string input;
    while (42)
    {
        if (!std::cin || std::cin.eof())
            break;
        std::cout << prompt;
        if (!std::getline(std::cin, input))
            break;
        if (input.empty())
        {
            std::cerr << "Error: empty field, try again" << std::endl;
            continue;
        }
        break;
    }
    return (input);
}

void Contact::info(void)
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

std::string Contact::trim_input(std::string res)
{
    std::string spaces = "\t\n\v\f\r ";
    res.erase(0, res.find_first_not_of(spaces));
    res.erase(res.find_last_not_of(spaces) + 1);
    return (res);
}

std::string Contact::get_phone_number(void)
{
    size_t i;
    size_t max;
    size_t min;

    std::string num;
    while (42)
    {
        i = 0;
        max = 10;
        min = 3;
        num = trim_input(get_input("Phone Number: "));
        if (!std::cin || std::cin.eof())
            break;
        if (num[i] == '+')
        {
            i++;
            max += 3;
            min += 3;
        }
        while (num[i] >= '0' && num[i] <= '9' && i < max)
            i++;
        if (i == num.size() && i >= min)
            break;
        std::cerr << "Error: invalid phone number, try again" << std::endl;
    }
    return (num);
}
