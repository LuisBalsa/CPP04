/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:13:30 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/01 15:31:32 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &    Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	*this->_brain = *rhs._brain;
	return (*this);
}

void    Cat::makeSound(void) const
{
	std::cout << "Cat: Meowww..." << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}
