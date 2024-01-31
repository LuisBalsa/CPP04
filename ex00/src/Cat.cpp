/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:13:30 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/31 15:21:17 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &    Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void    Cat::makeSound(void) const
{
	std::cout << "Cat: Meowww..." << std::endl;
}
