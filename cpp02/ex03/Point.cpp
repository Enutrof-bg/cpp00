/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:07:01 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 14:07:02 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float i, const float j): x(Fixed(i)), y(Fixed(j))
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point &copy):x(copy.x), y(copy.y)
{
	// std::cout << "Copy constructor called" << std::endl;
	// *this = copy;
}

Point &Point::operator=(const Point &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	// if (this != &other)
	// {
	// 	x = other.x;
	// 	y = other.y;
	// }
	(void)other;
	return *this;
}

Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
}

int Point::getX() const 
{
	return (x.getRawBits());
}
int Point::getY() const
{
	return (y.getRawBits());
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
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

	return (A1 + A2 + A3 == A);
}