/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:09:53 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 16:09:54 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Animal.hpp"


class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &other);
	~Dog();

	void makeSound() const;

	Brain* getBrain();
	const Brain* getBrain() const;
};
