/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:51:21 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/17 11:19:10 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const Fixed& x, const Fixed& y);
        Point(const Point& Copy);
        Point& operator=(const Point& Copy);
        float   get_x() const;
        float   get_y() const;
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);