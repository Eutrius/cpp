/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:36:00 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/21 15:54:10 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <cstdlib>
#include <iostream>
#include <stack>

class RPN
{
   public:
	static void solve(const std::string &expr);

   private:
	RPN(void);
	RPN(const RPN &other);
	~RPN(void);
	RPN &operator=(const RPN &other);
};
