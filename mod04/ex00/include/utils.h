/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:47:29 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 12:10:35 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <string>

typedef enum e_color
{
	BLACK,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	Purple,
	CYAN,
	WHITE,
}		t_color;

void	cPrint(const std::string &str, int endl = 1, t_color color = WHITE);

#endif
