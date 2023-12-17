/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:51:30 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/17 11:18:43 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point &Point::operator=(const Point &Copy)
{
    new(this) Point(Copy.x, Copy.y);
    return *this;
}

Point::Point(const Point &Copy)
{
    *this = Copy;
}

Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y) {}

float   Point::get_x() const
{
    float Px = this->x.toInt();
    return (Px);
}

float   Point::get_y() const
{
    float Py = this->y.toInt();
    return (Py);
}

Point::~Point(){}