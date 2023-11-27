/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:10:35 by ychahbi           #+#    #+#             */
/*   Updated: 2023/11/27 17:55:59 by ychahbi          ###   ########.fr       */
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

int Fixed::toInt() const
{
    return (0);
}

float Fixed::toFloat() const
{

    return (0);
}

Fixed::Fixed(int const integer)
{
    
}

Fixed::Fixed(double const integer)
{
    
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

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
    out << c.toInt();
    out << "sdfdsfds" << std::endl;
    return out;
}
