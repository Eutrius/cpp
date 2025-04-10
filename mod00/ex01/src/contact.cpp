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

Contact::Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name,
	std::string nickname, std::string phone_number,
	std::string darkest_secret) : first_name(first_name), last_name(last_name),
	nickname(nickname), phone_number(phone_number),
	darkest_secret(darkest_secret)
{
}

Contact::~Contact()
{
}
