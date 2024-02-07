/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:16:40 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 15:16:21 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type), isEquipped(false), isLearned(false)
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

bool AMateria::getIsEquipped() const
{
	return (isEquipped);
}

void AMateria::setIsEquipped()
{
	isEquipped = true;
}

bool AMateria::getIsLearned() const
{
	return (isLearned);
}

void AMateria::setIsLearned()
{
	isLearned = true;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
