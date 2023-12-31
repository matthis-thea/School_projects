/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:14:37 by haze              #+#    #+#             */
/*   Updated: 2023/09/21 11:52:43 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog constructor was created" << std::endl;
}

Dog::Dog(const Dog &clap) : Animal() {
	std::cout << "Dog Copy constructor called" << std::endl;
    *this = clap;
}

Dog& Dog::operator=(const Dog &clap)
{
	if (this != &clap)
	{
		this->_type= clap._type;
	}
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog deconstructor called" << std::endl;
}

std::string Dog::getType(void) const
{
	return (this->_type);
}

void Dog::makeSound() const
{
	std::cout << "Dog cry" << std::endl;
}