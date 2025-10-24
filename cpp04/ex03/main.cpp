/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:34:12 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:34:14 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void test_sujet()
{
	std::cout << "Test sujet" << std::endl;
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;

	delete src;
}

void test_1()
{
	std::cout << "\nTest 1" << std::endl;
	Character p1("Albert");

	Cure heal1;
	Cure* heal2 = heal1.clone();
	Cure* heal3 = heal1.clone();

	heal1.use(p1);
	heal2->use(p1);

	Ice shoot1;
	Ice* shoot2 = shoot1.clone();

// 	shoot1.use(p1);
// 	shoot2->use(p1);

	p1.equip(heal2);
	p1.equip(shoot2);
	// p1.equip(heal2);
	// p1.equip(heal2);
	// p1.equip(heal2);
	// p1.use(0, p1);
	// p1.use(1, p1);

	// Character p2 = p1;
	Character p2("Ga");
	p2.equip(heal3);
	p2 = p1;

	p2.use(0, p1);
	p2.use(1, p1);

	p1.unequip(0);
	p1.unequip(1);

	p2.use(0, p1);
	p2.use(1, p1);
	p2.use(2, p1);
	p2.use(3, p1);

	delete heal2;
	delete shoot2;
}

void test_2()
{
	std::cout << "\nTest2" << std::endl;
	MateriaSource src;
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());

	MateriaSource dst = src;
	(void)dst;
	// delete src;

	Character* me = new Character("me");
	Character target("cible");

	AMateria* tmp;
	tmp = dst.createMateria("ice");
	me->equip(tmp);
	tmp = dst.createMateria("cure");
	me->equip(tmp);

	me->use(0, target);
	me->use(1, target);


	delete me;
}

void test_3()
{
	std::cout << "\nTest3" << std::endl;
	std::cout << "Test: equip(NULL)" << std::endl;
	Character c1("Hero");
	c1.equip(NULL);
	c1.use(0, c1);
	
	std::cout << "\nTest: unequip" << std::endl;
	c1.unequip(-1);
	c1.unequip(10);
	c1.unequip(0);//Slot vide
	
	std::cout << "\nTest: use" << std::endl;
	c1.use(-1, c1);
	c1.use(10, c1);
}

void test_4()
{
	std::cout << "\nTest4" << std::endl;
	std::cout << "Test: Inventaire complet" << std::endl;
	Character c1("Hero");
	Ice* ice1 = new Ice();
	Ice* ice2 = new Ice();
	Ice* ice3 = new Ice();
	Ice* ice4 = new Ice();
	Ice* ice5 = new Ice();
	
	c1.equip(ice1);
	c1.equip(ice2);
	c1.equip(ice3);
	c1.equip(ice4);
	c1.equip(ice5);
	
	delete ice5;
	
	std::cout << "\nTest: unequip puis equip" << std::endl;
	c1.unequip(0);
	delete ice1;

	c1.use(0, c1);//vide

	Cure* cure = new Cure();
	c1.equip(cure);
	c1.use(0, c1);
	
	c1.unequip(1);
	delete ice2;
	c1.unequip(2);
	delete ice3;
	c1.unequip(3);
	delete ice4;
	c1.unequip(0);
	delete cure;
}

void test_5()
{
	std::cout << "\nTest5: MateriaSource pleine" << std::endl;
	MateriaSource src;
	Ice* ice1b = new Ice();
	Cure* cure2b = new Cure();
	Ice* ice3b = new Ice();
	Cure* cure4b = new Cure();
	Ice* ice5b = new Ice();

	src.learnMateria(ice1b);
	src.learnMateria(cure2b);
	src.learnMateria(ice3b);
	src.learnMateria(cure4b);
	src.learnMateria(ice5b);

	// delete ice1b;
	// delete cure2b;
	// delete ice3b;
	// delete cure4b;
	delete ice5b;
}

void test_6()
{
	std::cout << "\nTest6" << std::endl;
	MateriaSource src;
	std::cout << "Test: createMateria type inconnu" << std::endl;
	AMateria* fire = src.createMateria("fire");
	if (fire == NULL)
		std::cout << "Correctly returned NULL for unknown type" << std::endl;
	
	std::cout << "\nTest: MateriaSource vide" << std::endl;
	MateriaSource empty_src;
	AMateria* nothing = empty_src.createMateria("ice");
	if (nothing == NULL)
		std::cout << "Correctly returned NULL for empty source" << std::endl;
}


void test_7()
{
	std::cout << "\nTest7" << std::endl;
	std::cout << "Test: Deep copy" << std::endl;
	Character original("Original");
	Ice* ice = new Ice();
	original.equip(ice);
	
	Character copy = original;
	std::cout << "Original using materia:" << std::endl;
	original.use(0, copy);
	std::cout << "Copy using materia:" << std::endl;
	copy.use(0, original);
	
	std::cout << "original unequipped:" << std::endl;
	original.unequip(0);
	delete ice;
	original.use(0, copy);
	copy.use(0, original);
}

void test_leaks()
{
	std::cout << "\nTest: Materia non équipée doit être delete manuellement" << std::endl;
	Character hero("Hero");
	AMateria* dropped = new Ice();
	hero.equip(dropped);
	hero.unequip(0);
	delete dropped;
	
	std::cout << "\nTest: createMateria non équipé" << std::endl;
	MateriaSource src;
	src.learnMateria(new Ice());
	AMateria* created = src.createMateria("ice");
	//Si on ne l'equipe pas, il faut le delete
	delete created;
}

int main()
{
	test_sujet();
	
	test_1();
	
	test_2();
	
	test_3();

	test_4();
	
	test_5();
	
	test_6();

	test_7();
	
	test_leaks();
	
	return 0;
}