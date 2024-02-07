/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:02:38 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 15:52:10 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "Floor.hpp"
#include <iomanip>

void	titleHeader(const std::string& message)
{
	int standartSize = 34;
	int messageSize = message.length();
	int spacesBefore = (standartSize - messageSize) / 2 + messageSize;
	int spacesAfter = (standartSize - messageSize) / 2 + 1 + messageSize % 2;

	std::cout << "\033[91m\n=\t\t************************************\t\t=\n=\t\t*";
	std::cout << std::setw(spacesBefore) << message;
	std::cout << std::setw(spacesAfter) << "*";
	std::cout << "\t\t=\n=\t\t************************************\t\t=\n\033[0m" << std::endl;
}

void	subTitle(const std::string& message)
{
	std::cout << "\033[93m\n\t= " << message << " =\033[0m" << std::endl;
}

void	checked()
{
	std::cout << "\n\t\033[1;32m \xE2\x9C\x94 Sucess!\n\033[0m" << std::endl;
}

void	subjectTests(void)
{
	titleHeader("Subject tests");

	subTitle("Creating a new MateriaSource and learning Ice and Cure");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	checked();

	subTitle("Creating a new Character me");
	ICharacter* me = new Character("me");
	checked();

	subTitle("Adding Ice and Cure to the Character's me inventory");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	checked();

	subTitle("Creating a new Character bob");
	ICharacter* bob = new Character("bob");
	checked();

	subTitle("Expecxted output");
	me->use(0, *bob);
	me->use(1, *bob);
	checked();

	subTitle("Deleting the Characters");
	delete bob;
	delete me;
	delete src;
	checked();
}

void	deepCopyTests(void)
{
	titleHeader("Deep copy tests");

	subTitle("Creating a new MateriaSource and learning Ice and Cure");
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	checked();

	subTitle("Creating a new Character and equipping Ice and Cure");
	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	checked();

	subTitle("Creating a new Character with copy constructor");
	Character* clone = new Character(*me);
	checked();

	subTitle("Using the copy Character's materias");
	clone->use(0, *me);
	clone->use(1, *me);
	checked();

	subTitle("Deleting the Characters (Proves deep copy)");
	delete me;
	delete clone;
	checked();

	subTitle("Creating a new MateriaSources with copy constructor");
	MateriaSource* src2 = new MateriaSource(*src);
	(void)src2;
	checked();

	subTitle("Deleting the MateriaSources (Proves deep copy)");
	delete src;
	delete src2;
	checked();

	subTitle("Creating a new Materias");
	Ice* ice = new Ice();
	Cure* cure = new Cure();
	checked();

	subTitle("Creating a new Materias with copy constructor");
	Ice* ice2 = new Ice(*ice);
	Cure* cure2 = new Cure(*cure);
	(void)ice2;
	(void)cure2;
	checked();

	subTitle("Deleting the Materias (Proves deep copy)");
	delete ice;
	delete cure;
	delete ice2;
	delete cure2;
	checked();
}

void	limitsTestsUsingLoops(void)
{
	titleHeader("Limits tests using loops");

	subTitle("Creating a new MateriaSource and learning Ice and Cure");
	IMateriaSource* src = new MateriaSource();
	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n\tLearning Ice and Cure" << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	}

	subTitle("Creating a new Character me");
	ICharacter* me = new Character("me");
	checked();

	subTitle("Adding Ice and Cure to the Character's me inventory");
	AMateria* tmp;
	for (int i = 0; i < 2; i++)
	{
		std::cout << "\n\tCreating a new Ice and Cure and equipping them" << std::endl;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
	}
	checked();

	subTitle("Using the Character's me materias on itself");
	for (int i = 0; i < 4; i++)
	{
		me->use(i, *me);
	}
	checked();

	subTitle("Deleting the Character");
	delete me;
	delete src;
	checked();
}

int main()
{
	std::cout << "\033c";
	subjectTests();
	deepCopyTests();
	limitsTestsUsingLoops();
	return 0;
}
