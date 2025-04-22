/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:44:36 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/22 14:13:25 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZED_HPP
#define ZED_HPP

#include <string>

class Zed
{
  public:
	Zed(std::string infile, std::string fromStr, std::string toStr);
	~Zed(void);

	int run(void);

  private:
	std::string _infileName;
	std::string _fromStr;
	std::string _toStr;

	std::string replace(std::string line);

};

#endif
