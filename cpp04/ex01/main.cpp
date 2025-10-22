/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:08:23 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 16:08:24 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test_1(void)
{
	int size = 10;
	Animal** anim = new Animal*[size];

	for(int i = 0; i < size; i++)
	{
		if (i < (size/2))
			anim[i] = new Dog();
		else
			anim[i] = new Cat();
	}

	for(int x = 0; x < size; x++)
	{
		anim[x]->makeSound();
	}

	for(int j = 0; j < size; j++)
	{
		delete anim[j];
	}
	delete [] anim;
}

//object slicing
//makeSound va appeler Animal::makeSound
void test_2(void)
{
	int size = 10;
	Animal* anim = new Animal[size];

	for(int i = 0; i < size; i++)
	{
		if (i < (size/2))
			anim[i] = Dog();
		else
			anim[i] = Cat();
	}

	for(int x = 0; x < size; x++)
	{
		anim[x].makeSound();
	}
	delete [] anim;
}

int main()
{
	test_1();

	// test_2();

	// Brain brain;
	// brain[0] = "00";
	// brain[1] = "10";

	// Dog dog1;

	// Dog dog2;

	// dog1.brain[0] = "00"
}