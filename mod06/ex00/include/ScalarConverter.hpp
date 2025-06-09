/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:19:23 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/05 16:19:27 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

enum Type
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID,
    SPECIAL,
};

class ScalarConverter
{
  public:
    static void convert(const std::string &param);
};
