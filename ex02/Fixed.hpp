/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:03:55 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/27 14:47:28 by ychahbi          ###   ########.fr       */
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
        static Fixed &max(Fixed& cd, Fixed& cdd);
        static Fixed &min(Fixed& cd, Fixed& cdd);
        static const Fixed &max(const Fixed &cd, const Fixed &cdd);
        static const Fixed &min(const Fixed &cd, const Fixed &cdd);
        Fixed& operator=(const Fixed& Copy);
        Fixed& operator++(int);
        Fixed& operator++();
        Fixed& operator--(int);
        Fixed& operator--();
        bool operator>(const Fixed& Cpp) const;
        bool operator<(const Fixed& Cpp) const;
        bool operator>=(const Fixed& Cpp) const;
        bool operator<=(const Fixed& Cpp) const;
        bool operator==(const Fixed& Cpp) const;
        bool operator!=(const Fixed& Cpp) const;
        Fixed& operator*(const Fixed& Cpp) const;
        Fixed& operator+(const Fixed& Cpp) const;
        Fixed& operator-(const Fixed& Cpp) const;
        Fixed& operator/(const Fixed& Cpp) const;
        void    setRawBits(int const raw);
        int     getRawBits(void) const;
        float   toFloat( void ) const;
        int     toInt( void ) const;

        ~Fixed();
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif