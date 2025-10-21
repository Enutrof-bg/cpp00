/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:43:24 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/15 15:43:25 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	FragTrap &operator=(const FragTrap &other);
	virtual ~FragTrap();

	void highFivesGuys(void);
};