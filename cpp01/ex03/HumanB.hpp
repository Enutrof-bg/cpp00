/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:32:47 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 13:32:48 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_CPP
# define HUMANB_CPP

# include <iostream>
# include <stdio.h>
# include <limits>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	// std::string _Weapon;
	std::string _name;
	Weapon *_weapon;
	
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	HumanB(std::string name, Weapon &weapon);
	~HumanB(void);
	void attack(void);
};

#endif