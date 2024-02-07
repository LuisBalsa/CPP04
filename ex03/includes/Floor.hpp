/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:49:32 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 16:38:07 by luide-so         ###   ########.fr       */
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
		~Floor();
		Floor& operator=(const Floor &rhs);
		void addMateria(AMateria* materia);
		void cleanFloor();
		static Floor& getInstance();

	public:
		static void dropMateria(AMateria* materia);
		static void clean();
};

#endif
