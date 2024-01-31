/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:25:13 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/31 16:15:07 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &    Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void    Dog::makeSound(void) const
{
	std::cout << "Dog: Woof woof..." << std::endl;
}
