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

void test_polymorphism()
{
	std::cout << "\n=== TEST: Polymorphisme Animal ===" << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << "Type dog: " << dog->getType() << std::endl;
	std::cout << "Type cat: " << cat->getType() << std::endl;
	
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	
	delete animal;
	delete dog;
	delete cat;
}

void test_wrong_polymorphism()
{
	std::cout << "\n=== TEST: WrongAnimal (pas de virtual) ===" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << "Type: " << wrongCat->getType() << std::endl;
	
	wrongAnimal->makeSound();  // Devrait dire "je suis un animal"
	wrongCat->makeSound();     // ❌ Devrait dire "Meowww" mais dira "je suis un animal"
	
	delete wrongAnimal;
	delete wrongCat;
}

void test_copy_constructor()
{
	std::cout << "\n=== TEST: Copy constructor ===" << std::endl;
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
	std::cout << "\n=== TEST: Assignment operator ===" << std::endl;
	Dog dog1;
	Dog dog2;
	dog2 = dog1;
	
	Cat cat1;
	Cat cat2;
	cat2 = cat1;
	
	dog1.makeSound();
	dog2.makeSound();
}

void test_destructors()
{
	std::cout << "\n=== TEST: Destructeurs virtuels ===" << std::endl;
	{
		Animal* ptr = new Dog();
		delete ptr;  // ✓ Devrait appeler Dog::~Dog() puis Animal::~Animal()
	}
	std::cout << std::endl;
	{
		Animal* ptr = new Cat();
		delete ptr;  // ✓ Devrait appeler Cat::~Cat() puis Animal::~Animal()
	}
}
int main()
{
	Animal animal;
	Cat cat;
	Dog dog;
	cat.makeSound();
	dog.makeSound();

	std::cout << std::endl;

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

	std::cout << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	wc->makeSound();
	wrongmeta->makeSound();
	delete wrongmeta;
	delete wc;

	std::cout << std::endl;

	Animal *a;
	Dog d;
	a = &d;
	a->makeSound();

	std::cout << std::endl;

	Animal *test = new Dog;
	test->makeSound();
	delete test;

}