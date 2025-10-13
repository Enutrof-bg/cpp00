/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:32:14 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 13:32:15 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <stdio.h>
# include <limits>
# include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	Weapon(std::string name);
	~Weapon(void);
	
	std::string getType(void);
	void setType(std::string newType);
};

#endif

