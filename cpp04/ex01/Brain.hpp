/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:12:52 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/21 17:12:53 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <stdio.h>
#include "Animal.hpp"

class Brain
{
protected: 
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &other);
	~Brain();

	std::string	getIdeas(int index);
	void setIdeas(std::string newIdea, int index);
};
