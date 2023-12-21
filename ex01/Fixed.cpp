/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:10:35 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/21 10:04:00 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::i = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    Raw = 0;
}

Fixed::Fixed(int const integer)
{
    std::cout << "Int constructor called" << std::endl;
    Raw = integer * std::pow(2, i);
}

Fixed::Fixed(float const floatingPoint)
{
    std::cout << "Float constructor called" << std::endl;
    Raw = roundf(floatingPoint * std::pow(2, i));
}


int    Fixed::getRawBits(void) const
{
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


int Fixed::toInt() const
{
    return (Raw / std::pow(2, i));
}

float Fixed::toFloat() const
{
    return Raw / std::pow(2, i);
}

Fixed::Fixed(const Fixed& Copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Copy;
}

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}