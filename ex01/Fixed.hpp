/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:10:26 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/20 18:19:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

class Fixed
{
    private:
        int         Raw;
        static  const int i;
    public:
        Fixed();
        Fixed(int const integer);
        Fixed(float const floatingPoint);
        Fixed(const Fixed& Copy);
        Fixed& operator=(const Fixed& Copy);
        void    setRawBits(int const raw);
        int     getRawBits(void) const;
        float   toFloat( void ) const;
        int     toInt( void ) const;

        ~Fixed();
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif

