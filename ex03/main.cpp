/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:04:08 by ychahbi           #+#    #+#             */
/*   Updated: 2023/12/27 14:58:36 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point const a(10, 2);
    Point const b(3,2);
    Point const c(3, 13);
    Point const d(4, 5);
    if (bsp( a,  b,  c,  d) == true)
        std::cout << "the point is inside!" << std::endl;
    else
        std::cout << "the point is not inside!" << std::endl;
    return 0;
}