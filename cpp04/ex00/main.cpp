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

void test_sujet()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}

void test_wrong()
{
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << "Type: " << wrongCat->getType() << std::endl;
	
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	
	delete wrongAnimal;
	delete wrongCat;
}

void test_copy()
{
	Dog dog1;
	Dog dog2(dog1);
	
	Cat cat1;
	Cat cat2 = cat1;
	
	dog1.makeSound();
	dog2.makeSound();
	cat1.makeSound();
	cat2.makeSound();
}

void test_assignment()
{
	Dog dog1;
	Dog dog2;
	dog2 = dog1;
	
	Cat cat1;
	Cat cat2;
	cat2 = cat1;
	
	dog1.makeSound();
	dog2.makeSound();
	cat1.makeSound();
	cat2.makeSound();
}

void test_destructors()
{
	{
		Animal* ptr = new Dog();
		ptr->makeSound();
		delete ptr;
	}
	std::cout << std::endl;
	{
		Animal* ptr = new Cat();
		ptr->makeSound();
		delete ptr;
	}
}

int main()
{
	std::cout << "TEST 1"<< std::endl;
	Animal animal;
	Cat cat;
	Dog dog;
	cat.makeSound();
	dog.makeSound();

	std::cout << "\nTEST 2"<< std::endl;
	test_sujet();

	std::cout << "\nTEST 3"<< std::endl;

	test_wrong();
	std::cout << "\nTEST 4"<< std::endl;

	test_copy();
	std::cout << "\nTEST 5"<< std::endl;

	test_assignment();
	std::cout << "\nTEST 6"<< std::endl;

	test_destructors();
}