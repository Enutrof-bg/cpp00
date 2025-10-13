/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:32:18 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 13:32:19 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

Weapon::Weapon():type("")
{
	return ;
}

Weapon::Weapon(std::string name) : type(name)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}