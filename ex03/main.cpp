/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:04:08 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/17 10:52:21 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void    test(const Point cp)
{
    cp.get_x();
}

int main( void )
{
    Point const a(10, 2);
    Point const b(3,2);
    Point const c(3, 13);
    Point const d(4, 3);
    std::cout << bsp(a, b, c, d) << std::endl;
    return 0;
}