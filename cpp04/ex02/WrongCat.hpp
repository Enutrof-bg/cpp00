/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:59:59 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/21 17:00:00 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &other);
	~WrongCat();

	void makeSound() const;

};
