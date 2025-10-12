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

class Fixed
{
private:
	int _fixed;
	static const int _bits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &other);

	int getRawBits(void);
	void setRawBits(int const raw);
};

#endif
