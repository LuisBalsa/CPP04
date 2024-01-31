/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:26:17 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/31 15:28:11 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal(void);

		WrongAnimal &    operator=(WrongAnimal const & rhs);

		std::string getType(void) const;
		void    makeSound(void) const;
};

#endif
