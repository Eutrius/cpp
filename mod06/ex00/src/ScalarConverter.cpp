/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:19:29 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/05 16:20:25 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool isSpecial(const std::string &param);
static bool isInvalid(const std::string &param);
static Type getType(const std::string &param);
static void convertChar(const std::string &param, Type t);
static void convertInt(const std::string &param, Type t);
static void convertFloat(const std::string &param, Type t);
static void convertDouble(const std::string &param, Type t);

void ScalarConverter::convert(const std::string &param)
{

    char **end = NULL;
    long double value = strtold(param.c_str(), end);
}

static void convertChar(const std::string &param, Type t)
{
    unsigned char res;
}

static void convertInt(const std::string &param, Type t)
{
}

static void convertFloat(const std::string &param, Type t)
{
}

static void convertDouble(const std::string &param, Type t)
{
}

static Type getType(const std::string &param)
{
    if (isSpecial(param))
        return (SPECIAL);
    if (isInvalid(param))
        return (INVALID);
    char c = param[0];
    if (param.size() == 1 && !std::isdigit(c))
        return (CHAR);
    size_t i = 0;
    bool dotFlag = false;
    bool fFlag = false;
    while (param[i])
    {
        if (param[i] == '.')
            dotFlag = true;
        if (param[i] == 'f')
            fFlag = true;
        i++;
    }
    if (dotFlag)
    {
        if (fFlag)
            return (FLOAT);
        return (DOUBLE);
    }
    return (INT);
}

static bool isSpecial(const std::string &param)
{
    if (param == "nan" || param == "nanf" || param == "+inf" || param == "+inff" || param == "-inf" || param == "-inff")
        return (true);
    return (false);
}

static bool isInvalid(const std::string &param)
{
    if (param.size() == 0)
        return (true);
    size_t i = 0;
    if (param[0] == '-' || param[0] == '+')
        i++;
    bool dotFlag = false;
    char c;
    while (param[i])
    {
        c = param[i];
        if (i != 0 && param[i + 1] && param[i + 1] != 'f' && c == '.')
        {
            if (!dotFlag)
                dotFlag = true;
            else
                return (true);
            continue;
        }
        if (c == 'f' && i == param.size() - 1)
            continue;
        if (i != 0 && std::isalpha(c))
            return (true);
        i++;
    }
    return (false);
}
