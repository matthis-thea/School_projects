/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:11:36 by haze              #+#    #+#             */
/*   Updated: 2023/09/21 11:52:16 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat constructor was created" << std::endl;
}

Cat::Cat(const Cat &clap) : Animal() {
	std::cout << "Cat Copy constructor called" << std::endl;
    *this = clap;
}

Cat& Cat::operator=(const Cat &clap)
{
	if (this != &clap)
	{
		this->_type= clap._type;
	}
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor called" << std::endl;
}

std::string Cat::getType(void) const
{
	return (this->_type);
}

void Cat::makeSound() const
{
	std::cout << "Cat cry" << std::endl;
}