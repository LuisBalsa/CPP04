/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:31:48 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/31 18:18:36 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);

		Animal &    operator=(Animal const & rhs);

		std::string getType(void) const;
		virtual void    makeSound(void) const;
};

#endif
