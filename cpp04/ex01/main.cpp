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

void test_cat()
{
	Cat cat1;
	cat1.getBrain()->setIdeas("cacatest1", 0);
	cat1.getBrain()->setIdeas("cacatest2", 1);
	cat1.getBrain()->setIdeas("cacatest3", 2);
	cat1.getBrain()->setIdeas("cacatest4", 3);
	std::cout << cat1.getBrain()->getIdeas(0) << std::endl;
	Cat cat2;
	cat2 = cat1;
	std::cout << cat2.getBrain()->getIdeas(0) << std::endl;
	std::cout << cat2.getBrain()->getIdeas(1) << std::endl;
	std::cout << cat2.getBrain()->getIdeas(2) << std::endl;
	std::cout << cat2.getBrain()->getIdeas(3) << std::endl;
}

void test_dog()
{
	Dog dog1;
	dog1.getBrain()->setIdeas("cacatest1", 0);
	dog1.getBrain()->setIdeas("cacatest2", 1);
	dog1.getBrain()->setIdeas("cacatest3", 2);
	dog1.getBrain()->setIdeas("cacatest4", 3);
	std::cout << dog1.getBrain()->getIdeas(0) << std::endl;
	Dog dog2;
	dog2 = dog1;
	std::cout << dog2.getBrain()->getIdeas(0) << std::endl;
	std::cout << dog2.getBrain()->getIdeas(1) << std::endl;
	std::cout << dog2.getBrain()->getIdeas(2) << std::endl;
	std::cout << dog2.getBrain()->getIdeas(3) << std::endl;
}

int main()
{
	// test_1();

	// test_2();

	// test_cat();

	// test_dog();
}