/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:25:13 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/01 15:32:39 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &    Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	*this->_brain = *rhs._brain;
	return (*this);
}

void    Dog::makeSound(void) const
{
	std::cout << "Dog: Woof woof..." << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}
