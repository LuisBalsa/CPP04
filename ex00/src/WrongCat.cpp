/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:30:10 by luide-so          #+#    #+#             */
/*   Updated: 2024/01/31 15:30:50 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &    WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}
