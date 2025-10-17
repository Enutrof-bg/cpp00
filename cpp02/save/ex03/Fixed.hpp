/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:01:38 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/12 14:01:39 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <math.h>

class Fixed
{
private:
	int _fixed;
	static const int _bits;

public:
	Fixed();
	~Fixed();

	Fixed(const int val);
	Fixed(const float val);

	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(const Fixed &other);
	bool operator<(const Fixed &other);
	bool operator>=(const Fixed &other);
	bool operator<=(const Fixed &other);
	bool operator==(const Fixed &other);
	bool operator!=(const Fixed &other);

	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator/(const Fixed &other);

	Fixed &operator++(void);
	Fixed operator++(int);

	Fixed &operator--(void);
	Fixed operator--(int);

	static Fixed &min(Fixed &n1, Fixed &n2);
	static Fixed &max(Fixed &n1, Fixed &n2);
	const static Fixed &min(const Fixed &n1, const Fixed &n2);
	const static Fixed &max(const Fixed &n1, const Fixed &n2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
