/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:11:41 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 17:54:37 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define DEBUG

# ifdef DEBUG
#  define LOG(str) std::cout << str << std::endl;
# else
#  define LOG(str)
# endif

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
		bool		isTaken;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		virtual AMateria& operator=(const AMateria &src);

		std::string const & getType() const;

		bool getIsTaken() const;
		void setIsTaken();

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
