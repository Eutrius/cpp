/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:36:00 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/21 13:36:07 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

class RPN
{
   public:
	RPN(void);
	RPN(const RPN &other);
	~RPN(void);

	RPN &operator=(const RPN &other);
};
