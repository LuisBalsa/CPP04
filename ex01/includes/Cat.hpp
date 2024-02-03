/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:10:36 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/01 10:06:36 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat&	operator=(Cat const & rhs);

		virtual void	makeSound(void) const;

		Brain*	getBrain(void) const;
};

#endif
