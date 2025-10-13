/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:01:30 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/12 14:01:32 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int val)/*:_fixed(val)*/
{
	std::cout << "Int constructor called" << std::endl;
	_fixed = val << _bits;
	return ;
}

Fixed::Fixed(const float val): _fixed(val)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(val * (1 << _bits));
	return ;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	// _fixed = (copy).getRawBits();
	_fixed = copy._fixed;
	return ;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		// _fixed = other.getRawBits();
		_fixed = other._fixed;
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
	// return (this._fixed);
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}


float Fixed::toFloat(void) const
{
	// this._fixed 
	return ((float)_fixed / (float)(1 << _bits));
}

int Fixed::toInt(void) const
{
	return (_fixed >> _bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}