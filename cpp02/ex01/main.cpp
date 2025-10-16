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

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	// std::cout << std::setprecision(20) << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	// std::cout << std::setprecision(20) << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;



	// std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	// std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	// std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	// std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	// Fixed test(42);
	// std::cout << "Test1:" << test.getRawBits() <<std::endl;
	// std::cout << "Test1:" << test.toInt() <<std::endl;
	// std::cout << "Test1:" << test.toFloat() <<std::endl;
	// std::cout << "test is " << test << std::endl;

	// Fixed toto(50.6f);
	// std::cout << "toto:" << toto.getRawBits() <<std::endl;
	// std::cout << "toto:" << toto.toInt() <<std::endl;
	// std::cout << "toto:" << toto.toFloat() <<std::endl;
	// // std::cout << "toto:" << std::setprecision(20) << toto.toFloat() <<std::endl;
	// std::cout << "toto is " << toto << std::endl;
	return 0;
}
