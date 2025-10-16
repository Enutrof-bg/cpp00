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
	return (x.toInt());
}
int Point::getY() const
{
	return (y.toInt());
}
