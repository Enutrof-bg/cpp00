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

void test_brain_deep_copy()
{
	std::cout << "\n=== TEST: Deep copy du Brain ===" << std::endl;
	Dog dog1;
	dog1.getBrain()->setIdeas("Idea 1", 0);
	dog1.getBrain()->setIdeas("Idea 2", 1);
	
	std::cout << "dog1 ideas: " << dog1.getBrain()->getIdeas(0) << std::endl;
	
	Dog dog2 = dog1;  // Copy constructor
	std::cout << "dog2 ideas (après copy): " << dog2.getBrain()->getIdeas(0) << std::endl;
	
	// Vérifier que c'est une vraie copie, pas le même brain
	dog1.getBrain()->setIdeas("Modified", 0);
	std::cout << "dog1 modifié: " << dog1.getBrain()->getIdeas(0) << std::endl;
	std::cout << "dog2 devrait être inchangé: " << dog2.getBrain()->getIdeas(0) << std::endl;
	
	if (dog2.getBrain()->getIdeas(0) == "Idea 1")
		std::cout << "✓ Deep copy OK" << std::endl;
	else
		std::cout << "❌ Shallow copy détectée !" << std::endl;
}

void test_assignment_deep_copy()
{
	std::cout << "\n=== TEST: Assignment avec Brain ===" << std::endl;
	Cat cat1;
	cat1.getBrain()->setIdeas("Cat idea 1", 0);
	
	Cat cat2;
	cat2.getBrain()->setIdeas("Cat idea 2", 0);
	
	std::cout << "Avant assignment:" << std::endl;
	std::cout << "cat1: " << cat1.getBrain()->getIdeas(0) << std::endl;
	std::cout << "cat2: " << cat2.getBrain()->getIdeas(0) << std::endl;
	
	cat2 = cat1;  // Assignment
	
	std::cout << "Après assignment:" << std::endl;
	std::cout << "cat2: " << cat2.getBrain()->getIdeas(0) << std::endl;
	
	// Vérifier deep copy
	cat1.getBrain()->setIdeas("Modified cat1", 0);
	std::cout << "cat1 modifié: " << cat1.getBrain()->getIdeas(0) << std::endl;
	std::cout << "cat2 devrait être inchangé: " << cat2.getBrain()->getIdeas(0) << std::endl;
	
	if (cat2.getBrain()->getIdeas(0) == "Cat idea 1")
		std::cout << "✓ Deep copy OK" << std::endl;
	else
		std::cout << "❌ Shallow copy détectée !" << std::endl;
}

void test_array_animals()
{
	std::cout << "\n=== TEST: Tableau d'animaux ===" << std::endl;
	int size = 10;
	Animal** animals = new Animal*[size];
	
	for (int i = 0; i < size; i++)
	{
		if (i < size/2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	std::cout << "Tous les animaux créés" << std::endl;
	
	for (int i = 0; i < size; i++)
	{
		animals[i]->makeSound();
	}
	
	for (int i = 0; i < size; i++)
	{
		delete animals[i];
	}
	delete[] animals;
	
	std::cout << "Tous les animaux détruits" << std::endl;
}

void test_brain_nullptr()
{
	std::cout << "\n=== TEST: getBrain ne retourne pas NULL ===" << std::endl;
	Dog dog;
	Cat cat;
	
	if (dog.getBrain() != NULL)
		std::cout << "✓ Dog brain OK" << std::endl;
	else
		std::cout << "❌ Dog brain est NULL !" << std::endl;
	
	if (cat.getBrain() != NULL)
		std::cout << "✓ Cat brain OK" << std::endl;
	else
		std::cout << "❌ Cat brain est NULL !" << std::endl;
}

int main()
{
	test_1();

	test_2();

	test_cat();

	test_dog();
}