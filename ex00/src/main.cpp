/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:01:31 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/31 16:11:52 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iomanip>

void	titleHeader(const std::string& message)
{
	int standartSize = 34;
	int messageSize = message.length();
	int spacesBefore = (standartSize - messageSize) / 2 + messageSize;
	int spacesAfter = (standartSize - messageSize) / 2 + 2 + messageSize % 2;

	std::cout << "\n************************************\n*";
	std::cout << std::setw(spacesBefore) << message;
	std::cout << std::setw(spacesAfter) << "*\n";
	std::cout << "************************************\n" << std::endl;
}

void	test_animal(void)
{
	titleHeader("ANIMAL");
	const Animal* animal = new Animal();

	std::cout << "Animal type: " << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;
}

void	test_inheritance(void)
{
	titleHeader("INHERITANCE");
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Dog type: " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "Cat type: " << cat->getType() << std::endl;
	cat->makeSound();
	delete dog;
	delete cat;
}

void	test_wrong_cat(void)
{
	titleHeader("WRONG CAT");
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << "Wrong cat type: " << wrong_cat->getType() << std::endl;
	wrong_cat->makeSound();
	delete wrong_cat;
}

void	test_copy(void)
{
	titleHeader("COPY");
	const Animal* dog = new Dog();
	const Animal* copy = dog;

	std::cout << "Copy type: " << copy->getType() << std::endl;
	copy->makeSound();
	delete dog;
}

int	main(void)
{
	test_animal();
	test_inheritance();
	test_wrong_cat();
	test_copy();
	return (0);
}
