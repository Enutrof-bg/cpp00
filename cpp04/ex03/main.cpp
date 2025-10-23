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

void test_edge_cases()
{
	std::cout << "\n========== TEST EDGE CASES ==========\n" << std::endl;
	
	// Test 1: equip NULL
	std::cout << "--- Test: equip(NULL) ---" << std::endl;
	Character c1("Hero");
	c1.equip(NULL);
	c1.use(0, c1);
	
	// Test 2: unequip avec index invalide
	std::cout << "\n--- Test: unequip index invalide ---" << std::endl;
	c1.unequip(-1);
	c1.unequip(10);
	c1.unequip(0);  // Slot vide
	
	// Test 3: use avec index invalide
	std::cout << "\n--- Test: use index invalide ---" << std::endl;
	c1.use(-1, c1);
	c1.use(10, c1);
	
	// Test 4: Remplir l'inventaire complet
	std::cout << "\n--- Test: Inventaire complet ---" << std::endl;
	Ice* ice1 = new Ice();
	Ice* ice2 = new Ice();
	Ice* ice3 = new Ice();
	Ice* ice4 = new Ice();
	Ice* ice5 = new Ice();
	
	c1.equip(ice1);
	c1.equip(ice2);
	c1.equip(ice3);
	c1.equip(ice4);
	c1.equip(ice5);  // Devrait échouer (inventaire plein)
	
	delete ice5;  // ice5 non équipé, il faut le delete
	
	// Test 5: unequip puis re-equip
	std::cout << "\n--- Test: unequip puis re-equip ---" << std::endl;
	c1.unequip(0);  // ice1 déséquipé
	delete ice1;    // IMPORTANT: unequip ne delete pas !
	c1.use(0, c1);  // Slot vide
	Cure* cure = new Cure();
	c1.equip(cure);  // Équipe dans le slot libre
	c1.use(0, c1);
	
	// Nettoyage des autres materias dans l'inventaire
	c1.unequip(1);
	delete ice2;
	c1.unequip(2);
	delete ice3;
	c1.unequip(3);
	delete ice4;
	c1.unequip(0);
	delete cure;
	
	// Test 6: MateriaSource - apprendre plus de 4 materias
	std::cout << "\n--- Test: MateriaSource pleine ---" << std::endl;
	MateriaSource src;
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice());  // 5ème, devrait échouer silencieusement
	
	// Test 7: createMateria type inconnu
	std::cout << "\n--- Test: createMateria type inconnu ---" << std::endl;
	AMateria* unknown = src.createMateria("fire");
	if (unknown == NULL)
		std::cout << "Correctly returned NULL for unknown type" << std::endl;
	
	// Test 8: MateriaSource vide
	std::cout << "\n--- Test: MateriaSource vide ---" << std::endl;
	MateriaSource empty_src;
	AMateria* nothing = empty_src.createMateria("ice");
	if (nothing == NULL)
		std::cout << "Correctly returned NULL for empty source" << std::endl;
	
	// Test 9: Deep copy verification
	std::cout << "\n--- Test: Deep copy ---" << std::endl;
	Character original("Original");
	Ice* test_ice = new Ice();
	original.equip(test_ice);
	
	Character copy = original;
	std::cout << "Original using materia:" << std::endl;
	original.use(0, copy);
	std::cout << "Copy using materia:" << std::endl;
	copy.use(0, original);
	
	original.unequip(0);
	delete test_ice;
	std::cout << "After original unequipped:" << std::endl;
	copy.use(0, original);  // copy devrait toujours avoir sa copie
	
	// Test 10: Self-assignment
	std::cout << "\n--- Test: Self-assignment ---" << std::endl;
	Character self("Self");
	Cure* self_cure = new Cure();
	self.equip(self_cure);
	self = self;  // Auto-assignation
	self.use(0, self);
}

void test_memory_leaks()
{
	std::cout << "\n========== TEST MEMORY MANAGEMENT ==========\n" << std::endl;
	
	// Test: Materia non équipée
	std::cout << "--- Test: Materia non équipée doit être delete manuellement ---" << std::endl;
	Character hero("Hero");
	AMateria* dropped = new Ice();
	hero.equip(dropped);
	hero.unequip(0);
	delete dropped;  // Obligatoire car unequip ne delete pas
	
	// Test: createMateria et non équipé
	std::cout << "\n--- Test: createMateria non équipé ---" << std::endl;
	MateriaSource src;
	src.learnMateria(new Ice());
	AMateria* created = src.createMateria("ice");
	// Si on ne l'équipe pas, il faut le delete
	delete created;
	
	std::cout << "\nMemory tests completed (check with valgrind)" << std::endl;
}

int main()
{
	std::cout << "========== TESTS DU SUJET ==========\n" << std::endl;
	test_sujet();
	
	std::cout << "\n========== TEST 1 ==========\n" << std::endl;
	test_1();
	
	std::cout << "\n========== TEST 2 ==========\n" << std::endl;
	test_2();
	
	test_edge_cases();
	
	test_memory_leaks();
	
	std::cout << "\n========== ALL TESTS COMPLETED ==========\n" << std::endl;
	
	return 0;
}