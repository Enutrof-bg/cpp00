/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:32:33 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 13:32:34 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

# include <iostream>
# include <stdio.h>
# include <limits>
# include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	// std::string _Weapon;
	std::string _name;
	Weapon &_weapon;
	
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void);
};

#endif