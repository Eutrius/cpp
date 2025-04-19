/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:21:47 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/10 13:27:21 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <sstream>

Phonebook::Phonebook(void) : size(0), oldest(0)
{
}

Phonebook::~Phonebook(void)
{
}

void Phonebook::add(void)
{
    std::cout << "\033[2J\033[1;1H";
    if (size < MAX_CONTACT)
    {
        contacts[size].populate();
        size++;
    }
    else
    {
        contacts[oldest].populate();
        oldest = (oldest + 1) % size;
    }
}

void Phonebook::search(void)
{
    if (size == 0)
    {
        std::cout << "Error: phonebook is empty" << std::endl;
        return;
    }
    std::cout << "\033[2J\033[1;1H";
    print_headers();
    for (int i = 0; i < size; i++)
        print_contact_names(i);
    print_seperator();
    select_contact();
}

void Phonebook::print_formatted(std::string str, int mode)
{
    int len;

    len = str.size();
    if (mode == 0)
        std::cout << "|";
    if (len <= COLUMN_WIDTH)
        std::cout << std::string(COLUMN_WIDTH - len, ' ') + str;
    else
        std::cout << str.substr(0, COLUMN_WIDTH - 1) + '.';
    std::cout << "|";
    if (mode == 2)
        std::cout << std::endl;
}

void Phonebook::print_seperator(void)
{
    std::cout << std::string(((COLUMN_WIDTH + 1) * COLUMN_NUM) + 1, '-') << std::endl;
}

void Phonebook::print_headers(void)
{
    print_seperator();
    print_formatted("Index", 0);
    print_formatted("First Name", 1);
    print_formatted("Last Name", 1);
    print_formatted("Nickname", 2);
    print_seperator();
}

void Phonebook::print_contact_names(int index)
{
    Contact contact;
    std::ostringstream oss;

    oss << index + 1;
    contact = contacts[index];
    print_formatted(oss.str(), 0);
    print_formatted(contact.getFirstName(), 1);
    print_formatted(contact.getLastName(), 1);
    print_formatted(contact.getNickname(), 2);
}

void Phonebook::select_contact(void)
{
    int value;
    std::string input;

    while (42)
    {
        if (!std::cin || std::cin.eof())
            return;
        std::cout << "Select: ";
        if (!std::getline(std::cin, input))
            return;
        if (input.size() == 1)
        {
            value = input[0] - '0';
            if (value >= 1 && value <= size)
                break;
        }
        std::cerr << "Error: invalid index, try again" << std::endl;
    }
    contacts[(input[0] - '0') - 1].info();
}
