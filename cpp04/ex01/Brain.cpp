/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:12:49 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/21 17:12:50 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor" << std::endl;
	// this->ideas";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy constructor" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment operator" << std::endl;
	if (this != &other)
	{
		// this->ideas = other.ideas;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}
