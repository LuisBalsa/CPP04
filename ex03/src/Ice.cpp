/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:35:26 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 16:57:14 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	LOG("Ice constructor called");
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	LOG("Ice copy constructor called");
	this->isTaken = false;
	*this = src;
}

Ice::~Ice()
{
	LOG("Ice destructor called");
}

Ice	&Ice::operator=(const AMateria &src)
{
	(void)src;
	LOG("Ice assignation operator called");
	return (*this);
}

Ice	&Ice::operator=(const Ice &src)
{
	(void)src;
	LOG("Ice assignation operator called");
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
