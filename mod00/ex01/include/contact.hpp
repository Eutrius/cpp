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
	Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string phone_number, std::string darkest_secret);
	~Contact();

  private:
	std::string phone_number;
	std::string darkest_secret;
};

#endif
