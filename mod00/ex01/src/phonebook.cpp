/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:21:47 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/10 13:27:21 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->size = 0;
	this->oldest = 0;
}

Phonebook::~Phonebook()
{
	if (size > 0)
	{
		for (int i = 0; i < this->size; i++)
			delete this->contacts[i];
	}
}

void Phonebook::add(void)
{
	Contact	*contact;
	int		new_oldest;

	contact = new Contact();
	if (this->size < MAX_NUM_CONTACT)
	{
		this->contacts[this->oldest] = contact;
		this->oldest++;
		this->size++;
	}
	else
	{
		new_oldest = (this->oldest + 1) % this->size;
		delete this->contacts[new_oldest];
		this->contacts[new_oldest] = contact;
		this->oldest = new_oldest;
	}
}

void Phonebook::search(void)
{
}
