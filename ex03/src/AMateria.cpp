/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:16:40 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 16:53:33 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type), isTaken(false)
{
	LOG("AMateria constructor called");
}

AMateria::~AMateria()
{
	LOG("AMateria destructor called");
}

AMateria& AMateria::operator=(const AMateria& materia)
{
	LOG("AMateria assignment operator called.");
	if (this == &materia)
		return (*this);
	this->type = materia.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

bool AMateria::getIsTaken() const
{
	return (isTaken);
}

void AMateria::setIsTaken()
{
	isTaken = true;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
