/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:09:59 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 16:10:00 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <stdio.h>
#include "Brain.hpp"
#include "Animal.hpp"


class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &other);
	~Cat();

	void makeSound() const;

};