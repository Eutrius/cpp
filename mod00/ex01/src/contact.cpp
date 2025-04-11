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

#include "contact.hpp"
#include <iostream>

static std::string get_input(std::string prompt);

Contact::Contact()
{
	this->first_name = get_input("first name: ");
	this->last_name = get_input("last name: ");
	this->nickname = get_input("nickname: ");
	this->phone_number = get_input("phone number: ");
	this->darkest_secret = get_input("darkest secret: ");
}

Contact::~Contact()
{
}

static std::string get_input(std::string prompt)
{
	std::string input;
	while (1)
	{
		if (!std::cin.eof())
			std::cout << prompt;
		if (!std::getline(std::cin, input))
			return (input);
		if (input.size() == 0)
			continue ;
		return (input);
	}
}
