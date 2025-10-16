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
#include "Point.hpp"


int main( void )
{
	Point const a(0,0);
	Point const b(0,10);
	Point const c(10,0);

	Point const point(1,1);
	
	std::cout << "True:" << true << std::endl;
	std::cout << "False:" << false << std::endl;

	if (bsp(a,b,c,point))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;

	return 0;
}
