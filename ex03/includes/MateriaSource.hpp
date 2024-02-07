/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:24:21 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 16:22:04 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "Floor.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	learned[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &src);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
