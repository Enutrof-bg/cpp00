/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:58:22 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 17:58:23 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bsp.hpp"

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float num = (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0;
	return num > 0 ? num : -num;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float A = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());

	float A1 = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());

	float A2 = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());

	float A3 = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());

    std::cout << A1 + A2 +A3 << std::endl;
    std::cout << A << std::endl;
	return (A1 + A2 + A3 == A);
}

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
//  float d1 = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
//     float d2 = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
//     float d3 = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());

//     bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
//     bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
//     bool has_zero = (d1 == 0) || (d2 == 0) || (d3 == 0);

//     if (has_zero)
//         return (false);
//     return !(has_neg && has_pos);
// }