/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:24:35 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/01 10:08:27 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);

		Dog&	operator=(Dog const & rhs);

		virtual void	makeSound(void) const;

		Brain*	getBrain(void) const;
};

#endif
