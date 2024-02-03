/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:10:05 by luide-so          #+#    #+#             */
/*   Updated: 2024/02/01 14:11:35 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	std::string	listIdeas[10] = {
		"I am hungry", "I am thirsty", "I am sleepy","I am bored", "I am happy",
		"I am sad", "I am angry", "I am excited","I am tired", "I am sick"};
	for (int i = 0; i < 100; i++)
		this->ideas[i] = listIdeas[i % 10];
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

void	Brain::showIdeas(void) const
{
	for (int i = 0; i < 5; i++)
		std::cout << this->ideas[i] << std::endl;
}
