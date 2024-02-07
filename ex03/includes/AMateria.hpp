/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:11:41 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/07 15:20:40 by luide-so         ###   ########.fr       */
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
		bool		isEquipped;
		bool		isLearned;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		virtual AMateria& operator=(const AMateria &src);

		std::string const & getType() const;

		bool getIsEquipped() const;
		void setIsEquipped();
		bool getIsLearned() const;
		void setIsLearned();

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
