/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:51:24 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/17 11:19:32 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float a_area =  0.5 * std::abs(a.get_x() * (point.get_y() - b.get_y()) + point.get_x() * (b.get_y() - a.get_y()) + b.get_x() * (a.get_y() - point.get_y()));
    float b_area = 0.5 * std::abs(a.get_x() * (point.get_y() - c.get_y()) + point.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - point.get_y()));
    float c_area = 0.5 * std::abs(c.get_x() * (point.get_y() - b.get_y()) + point.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - point.get_y()));
    float origenal_area = 0.5 * std::abs(c.get_x() * (a.get_y() - b.get_y()) + a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()));
    float total_areas = a_area + b_area + c_area;
    if (origenal_area == total_areas && a_area && b_area && c_area)
        return (1);
    return (0);
}