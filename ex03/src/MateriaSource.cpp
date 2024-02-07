/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:27:20 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 16:21:58 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	LOG("MateriaSource constructor called");
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	LOG("MateriaSource copy constructor called");
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	LOG("MateriaSource destructor called");
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i])
			delete this->learned[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	LOG("MateriaSource assignation operator called");
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learned[i])
				delete this->learned[i];
			if (src.learned[i])
				this->learned[i] = src.learned[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m || m->getIsEquipped() || m->getIsLearned())
		return (std::cout << "Materia has already been equipped or learned\n", void());
	for (int i = 0; i < 4; i++)
	{
		if (!this->learned[i])
		{
			this->learned[i] = m;
			m->setIsLearned();
			return ;
		}
	}
	Floor::dropMateria(m);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] && this->learned[i]->getType() == type)
			return this->learned[i]->clone();
	}
	return NULL;
}
