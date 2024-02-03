/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:01:31 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/01 14:53:37 by luide-so         ###   ########.fr       */
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
	int spacesAfter = (standartSize - messageSize) / 2 + 1 + messageSize % 2;

	std::cout << "\n=\t\t************************************\t\t=\n=\t\t*";
	std::cout << std::setw(spacesBefore) << message;
	std::cout << std::setw(spacesAfter) << "*";
	std::cout << "\t\t=\n=\t\t************************************\t\t=\n" << std::endl;
}

void	subTitle(const std::string& message)
{
	std::cout << "\n\t= " << message << " =\n" << std::endl;
}

void	test_polimorphism_array(void)
{
	titleHeader("Testing polimorphism with arrays");

	const int	animalsSize = 4;
	Animal*		animals[animalsSize];

	subTitle("Creating animals array");
	for (int i = 0; i < animalsSize; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	subTitle("Destroying animals array with polymorphism");
	for (int i = 0; i < animalsSize; i++)
		delete animals[i];
}

void	test_deep_copy(void)
{
	titleHeader("Testing deep copy");

	subTitle("Creating cat and clone");
	Cat*	animal = new Cat();
	Cat*	clone = new Cat(*animal);

	subTitle("Using cat");
	animal->makeSound();
	std::cout << "Animal brain: " << animal->getBrain() << std::endl;

	subTitle("Using clone");
	clone->makeSound();
	std::cout << "Clone brain: " << clone->getBrain() << std::endl;

	subTitle("Destroying cat and clone");
	delete animal;
	delete clone;

	subTitle("Creating dog and tmp dog");
	Dog	dog;
	{
		Dog	tmp = dog;
		subTitle("Using dog and tmp dog");
		dog.makeSound();
		std::cout << "Dog brain: " << dog.getBrain() << std::endl;
		tmp.makeSound();
		std::cout << "Tmp dog brain: " << tmp.getBrain() << std::endl;

		subTitle("Destroying dog and tmp dog");
	}
}

int	main(void)
{
	std::cout << "\033c";
	test_polimorphism_array();
	test_deep_copy();
	return (0);
}
