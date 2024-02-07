/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:25:49 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 16:21:15 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
	LOG("Character constructor called");
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	LOG("Character copy constructor called");
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = src;
}

Character::~Character()
{
	LOG("Character destructor called");
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

Character	&Character::operator=(const Character &src)
{
	LOG("Character assignation operator called");
	if (this != &src)
	{
		name = src.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			if (src.inventory[i])
				inventory[i] = src.inventory[i]->clone();
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (!m || m->getIsEquipped() || m->getIsLearned())
		return (std::cout << "Materia has already been equipped or learned\n", void());
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			m->setIsEquipped();
			return;
		}
	}
	Floor::dropMateria(m);
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		Floor::dropMateria(inventory[idx]);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
