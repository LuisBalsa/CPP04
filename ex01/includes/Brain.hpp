/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:08:21 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/31 20:08:56 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		// Constructors
		Brain(void);
		Brain(Brain const &src);
		virtual ~Brain(void);

		// Operators
		Brain &operator=(Brain const &src);

		// Member functions
		void	showIdeas(void) const;
};

#endif
