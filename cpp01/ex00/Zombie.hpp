/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:18:56 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 11:18:57 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <limits>
# include <stdio.h>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	void setName(std::string name);
	void announce(void);
	// Zombie* newZombie(std::string name);
	// Zombie* newZombie(std::string name);
	// void randomChump(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif