/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:48:54 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/22 14:13:27 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zed.hpp"
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

Zed::Zed(std::string infileName, std::string fromStr, std::string toStr)
    : _infileName(infileName), _fromStr(fromStr), _toStr(toStr)
{
}

Zed::~Zed(void)
{
}

int Zed::run(void)
{
    std::ifstream infile(_infileName.c_str());
    if (!infile)
    {
        std::cerr << "Error: unable to open infile" << std::endl;
        return (1);
    }

    std::string outfileName = _infileName;
    outfileName += ".replace";
    std::ofstream outfile(outfileName.c_str());
    if (!outfile)
    {
        infile.close();
        std::cerr << "Error: unable to create or open outfile" << std::endl;
        return (1);
    }

    std::string line;
    while (std::getline(infile, line))
        outfile << replace(line) << std::endl;

    infile.close();
    outfile.close();
    return (0);
}

std::string Zed::replace(std::string line)
{
    std::string res;

    if (!_fromStr.length())
        return (line);
    for (size_t i = 0; i < line.length(); i++)
    {
        if (line.compare(i, _fromStr.length(), _fromStr) == 0)
        {
            res += _toStr;
            i += _fromStr.length() - 1;
        }
        else
            res += line[i];
    }
    return (res);
}
