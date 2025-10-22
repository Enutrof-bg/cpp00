/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:34:12 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:34:14 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	std::cout << "test" << std::endl;

	// AMateria materia("materiel");
	// std::cout << materia.getType() << std::endl;

	Cure heal;

	Cure v2 = heal.clone();
}