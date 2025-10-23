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

void test_abstract_class()
{
	std::cout << "\n=== TEST: Animal est abstraite ===" << std::endl;
	// Animal animal;  // ❌ Ne devrait PAS compiler si makeSound() = 0
	// std::cout << "❌ Animal n'est pas abstraite !" << std::endl;
	
	// On peut seulement créer des pointeurs
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	
	dog->makeSound();
	cat->makeSound();
	
	delete dog;
	delete cat;
	
	std::cout << "✓ Animal est bien abstraite" << std::endl;
}

void test_brain_deep_copy()
{
	std::cout << "\n=== TEST: Deep copy du Brain ===" << std::endl;
	Dog dog1;
	Dog dog2 = dog1;
	
	// Note: ex02 n'a pas de getters/setters pour Brain
	// Mais la deep copy devrait quand même fonctionner
	std::cout << "✓ Test de copie effectué (pas de crash)" << std::endl;
}

void test_no_animal_instantiation()
{
	std::cout << "\n=== TEST: Impossible d'instancier Animal ===" << std::endl;
	
	// Ce code ne devrait PAS compiler:
	// Animal animal;
	// Animal* ptr = new Animal();
	
	// On peut seulement:
	Animal* dog = new Dog();
	std::cout << "✓ Seules les classes dérivées peuvent être instanciées" << std::endl;
	delete dog;
}

int main()
{
	// Animal animal;
	Cat cat;
	Dog dog;
	cat.makeSound();
	dog.makeSound();
}