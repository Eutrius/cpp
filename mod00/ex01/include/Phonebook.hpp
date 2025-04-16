/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:43:14 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/10 13:26:34 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{
  public:
    Phonebook();
    ~Phonebook();

    void add();
    void search();

  private:
    static const int MAX_CONTACT = 8;
    static const int COLUMN_WIDTH = 10;
    static const int COLUMN_NUM = 4;

    int size;
    int oldest;
    Contact *contacts[MAX_CONTACT];

    void print_formatted(std::string str, int mode);
    void print_seperator(void);
    void print_headers(void);
    void print_contact_names(int index);
    void select_contact(void);
};

#endif
