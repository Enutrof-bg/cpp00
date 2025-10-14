/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:01:14 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/12 14:01:15 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	std::cout << "Test" << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed t1(10);
	Fixed t2(20);
	
	std::cout << "t1>t2:" <<(t1 > t2) << std::endl;
	std::cout << "t1<t2:" <<(t1 < t2) << std::endl;
	std::cout << "t1>=t2:" <<(t1 >= t2) << std::endl;
	std::cout << "t1<=t2:" <<(t1 <= t2) << std::endl;
	std::cout << "t1==t2:" <<(t1 == t2) << std::endl;
	std::cout << "t1!=t2:" <<(t1 != t2) << std::endl;

	Fixed t3 = t1 + t2;
	Fixed t4 = t1 - t2;
	Fixed t5 = t1 * t2;
	Fixed t6 = t1 / t2;
	std::cout << "t3=t1+t2:" <<t3 << std::endl;
	std::cout << "t4=t1-t2:" <<t4 << std::endl;
	std::cout << "t5=t1*t2:" <<t5 << std::endl;
	std::cout << "t6=t1/t2:" <<t6 << std::endl;

	Fixed t7 = --t1;

	std::cout << "t7=t1--:" <<t7 << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
