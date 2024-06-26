/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:03:43 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/21 11:44:53 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::i = 8;

Fixed::Fixed()
{
    Raw = 0;
}

Fixed::Fixed(int const integer)
{
    Raw = integer * 256;
}

Fixed::Fixed(float const floatingPoint)
{
    Raw = roundf(floatingPoint * 256);
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
    this->Raw = Copy.getRawBits();
    return *this;
}

Fixed& Fixed::operator++(int)
{
    Fixed *tmp = new Fixed(*this);
    ++this->Raw;
    return (*tmp);
}

Fixed& Fixed::operator++()
{
    this->Raw++;
    return (*this);
}

Fixed& Fixed::operator--(int)
{
    Fixed *tmp = new Fixed(*this);
    --this->Raw;
    return (*tmp);
}

Fixed& Fixed::operator--()
{
    this->Raw--;
    return (*this);
}

int Fixed::toInt() const
{
    return (Raw / 256);
}

float Fixed::toFloat() const
{
    return (float) Raw / 256;
}

Fixed::Fixed(const Fixed& Copy)
{
    // setRawBits(Copy.getRawBits());
    *this = Copy;
    
}

Fixed& Fixed::operator*(const Fixed& Cpp) const
{
    Fixed *tmp = new Fixed(*this);
    *tmp = this->toFloat() * Cpp.toFloat();
    return (*tmp);
}

Fixed& Fixed::operator+(const Fixed& Cpp) const
{
    Fixed *tmp = new Fixed(*this);
    *tmp = this->toFloat() + Cpp.toFloat();
    return (*tmp);
}

Fixed& Fixed::operator-(const Fixed& Cpp) const
{
    Fixed *tmp = new Fixed(*this);
    *tmp = this->toFloat() - Cpp.toFloat();
    return (*tmp);
}

Fixed& Fixed::operator/(const Fixed& Cpp) const
{
    Fixed *tmp = new Fixed(*this);
    *tmp = this->toFloat() / Cpp.toFloat();
    return (*tmp);
}

bool Fixed::operator>(const Fixed& Cpp) const
{
    return (this->toFloat() > Cpp.toFloat());
}

bool Fixed::operator<(const Fixed& Cpp) const
{
    return (this->toFloat() < Cpp.toFloat());
}

bool Fixed::operator>=(const Fixed& Cpp) const
{
    return (this->toFloat() >= Cpp.toFloat());
}

bool Fixed::operator<=(const Fixed& Cpp) const
{
    return (this->toFloat() <= Cpp.toFloat());
}

bool Fixed::operator==(const Fixed& Cpp) const
{
    return (this->toFloat() == Cpp.toFloat());
}

bool Fixed::operator!=(const Fixed& Cpp) const
{
    return (this->toFloat() != Cpp.toFloat());
}

Fixed Fixed::max(Fixed& cd, const Fixed cdd)
{
    if (cd.toFloat() >= cdd.toFloat())
        return (cd);
    return (cdd);
}

Fixed Fixed::min(Fixed& cd, const Fixed cdd)
{
    if (cd.toFloat() <= cdd.toFloat())
        return (cd);
    return (cdd);
}

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}

Fixed::~Fixed()
{
}