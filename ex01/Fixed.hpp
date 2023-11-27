/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:10:26 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/27 17:47:26 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int         Raw;
        static  const int i;
    public:
        Fixed();
        Fixed(int const integer);
        Fixed(double const integer);
        Fixed(const Fixed& Copy);
        Fixed& operator=(const Fixed& Copy);
        void    setRawBits(int const raw);
        int     getRawBits(void) const;
        std::ostream& operator<<(std::ostream& output) const;
        float   toFloat( void ) const;
        int     toInt( void ) const;

        ~Fixed();
};

// std::ostream& Fixed::operator<<(std::ostream& output) const{
//     output << Raw;
//     return (output);
// }
// std::ostream& operator << (std::ostream& output, const Fixed& obj)
// {
//     return obj.operator<<(output);
// }

#endif