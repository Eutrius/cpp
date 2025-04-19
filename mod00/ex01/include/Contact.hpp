/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:12:58 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/10 13:12:59 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
  public:
    Contact(void);
    ~Contact(void);

    void info(void);
    void populate(void);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);

  private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::string get_input(std::string prompt);
    std::string trim_input(std::string res);
    std::string get_phone_number(void);
};

#endif
