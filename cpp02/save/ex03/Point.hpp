/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:07:04 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 14:07:05 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <iomanip>
#include <math.h>
#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
	
public:
	Point();
	Point(const float i, const float j);
	Point(const Point &copy);
	Point &operator=(const Point &other);

	~Point();

	float getX() const;
	float getY() const;
};

#endif