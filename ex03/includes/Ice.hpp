/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:23:57 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/06 15:05:16 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &src);
		virtual ~Ice();
		Ice	&operator=(const AMateria &src);
		Ice	&operator=(const Ice &src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
