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