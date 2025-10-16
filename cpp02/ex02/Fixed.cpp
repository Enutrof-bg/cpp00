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
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int val):_fixed(val << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val): _fixed(roundf(val * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
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
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}


float Fixed::toFloat(void) const
{
	return ((float)_fixed / (float)(1 << _bits));
}

int Fixed::toInt(void) const
{
	return (_fixed >> _bits);
}

bool Fixed::operator>(const Fixed &other)
{
	return (_fixed > other._fixed);
}

bool Fixed::operator<(const Fixed &other)
{
	return (_fixed < other._fixed);
}

bool Fixed::operator>=(const Fixed &other)
{
	return (_fixed >= other._fixed);
}

bool Fixed::operator<=(const Fixed &other)
{
	return (_fixed <= other._fixed);
}

bool Fixed::operator==(const Fixed &other)
{
	return (_fixed == other._fixed);
}

bool Fixed::operator!=(const Fixed &other)
{
	return (_fixed != other._fixed);
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed result;
	result.setRawBits(this->_fixed + other._fixed);
	return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed result;
	result.setRawBits(this->_fixed - other._fixed);
	return result;
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed result;
	result.setRawBits((this->_fixed * (other._fixed >> _bits)));
	return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
	if (other._fixed == 0)
	{
		std::cout << "Trying to divide by 0" << std::endl;
		return (0);
	}
	Fixed result;
	result.setRawBits((this->_fixed << _bits)/ other._fixed);
	return result;
}

Fixed Fixed::operator++(void)
{
	_fixed++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed Fixed::operator--(void)
{
	_fixed--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n1;
	else
		return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	else
		return n2;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n1;
	else
		return n2;
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	else
		return n2;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}