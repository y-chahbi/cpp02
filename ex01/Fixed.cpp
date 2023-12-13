/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:10:35 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/08 22:09:29 by ychahbi          ###   ########.fr       */
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
    Raw = integer;
}

Fixed::Fixed(float const floatingPoint)
{
    std::cout << "Float constructor called" << std::endl;
    Raw = floatingPoint;
}

int    Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
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
    return ((int)Raw);
}

float Fixed::toFloat() const
{

    return (0);
}

Fixed::Fixed(const Fixed& Copy)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(Copy.getRawBits());
}

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
    out << c.toInt() + 10000;
    return out;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}