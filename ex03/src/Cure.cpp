/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:27:33 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 16:57:04 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	LOG("Cure constructor called");
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	LOG("Cure copy constructor called");
	this->isTaken = false;
	*this = src;
}

Cure::~Cure()
{
	LOG("Cure destructor called");
}

Cure	&Cure::operator=(const AMateria &src)
{
	(void)src;
	LOG("Cure assignation operator called");
	return (*this);
}

Cure	&Cure::operator=(const Cure &src)
{
	(void)src;
	LOG("Cure assignation operator called");
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
