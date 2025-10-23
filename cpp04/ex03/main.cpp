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

int main()
{
	//std::cout << "Test" << std::endl;

	// test_sujet();

	// test_1();

	test_2();

}