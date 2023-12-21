/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:06:14 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/21 09:59:54 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::i = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    Raw = 0;
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (Raw);
}

void    Fixed::setRawBits(int const raw)
{
    Raw = raw;
}

Fixed& Fixed::operator=(const Fixed& Copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Raw = Copy.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed& Copy)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(Copy.getRawBits());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
