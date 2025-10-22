/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:51:22 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:51:23 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &copy);
	Cure &operator=(const Cure &other);
	~Cure();

	Cure* clone() const;
	void use(ICharacter& target);
};
