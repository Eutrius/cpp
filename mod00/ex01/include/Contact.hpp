/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:12:58 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/10 13:12:59 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
  public:
	std::string first_name;
	std::string last_name;
	std::string nickname;

	Contact();
	~Contact();

	void info(void);

  private:
	std::string phone_number;
	std::string darkest_secret;

	std::string get_input(std::string prompt);
	std::string trim_input(std::string res);
	std::string get_phone_number(void);
};

#endif
