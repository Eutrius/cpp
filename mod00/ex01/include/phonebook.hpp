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
# define PHONEBOOK_H

# define MAX_NUM_CONTACT 8

# include "contact.hpp"

class Phonebook
{
  public:
	int size;

	Phonebook();
	~Phonebook();

	void add();
	void search();

  private:
	int oldest;
	Contact *contacts[MAX_NUM_CONTACT];
};

#endif
