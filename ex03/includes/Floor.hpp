/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:49:32 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 15:38:19 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

struct MateriaList
{
	AMateria*	materia;
	MateriaList	*next;
};

class Floor
{
	private:
		MateriaList	*list;
		Floor();
		Floor(const Floor &src);
		Floor& operator=(const Floor &rhs);
		~Floor();
		void addMateria(AMateria* materia);
		static Floor& getInstance();

	public:
		static void dropMateria(AMateria* materia);
};

#endif
