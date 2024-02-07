/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:58:14 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 15:17:49 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor()
{
	LOG("Floor constructor called");
	list = NULL;
}

Floor::~Floor()
{
	LOG("Floor destructor called");
	MateriaList *tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		delete tmp->materia;
		delete tmp;
	}
}

Floor& Floor::getInstance()
{
	static Floor instance;

	return instance;
}

void Floor::addMateria(AMateria* materia)
{
	LOG("Materia dropped on the floor");
	MateriaList *newMateria = new MateriaList;

	newMateria->materia = materia;
	newMateria->next = list;
	list = newMateria;
}

void Floor::dropMateria(AMateria* materia)
{
	getInstance().addMateria(materia);
}
