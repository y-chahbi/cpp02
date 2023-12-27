/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:06:11 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/24 08:51:37 by ychahbi          ###   ########.fr       */
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
        Fixed(const Fixed& Copy);
        Fixed& operator=(const Fixed& Copy);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        ~Fixed();
};

#endif

