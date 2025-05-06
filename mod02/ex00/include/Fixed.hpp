/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:53:08 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/29 17:20:13 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
  public:
    Fixed(void);
    Fixed(const Fixed &other);
    ~Fixed(void);

    Fixed &operator=(const Fixed &other);

    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    static const int FRACTIONAL_BITS = 8;
    int _value;
};
#endif
