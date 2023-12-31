/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:11:36 by haze              #+#    #+#             */
/*   Updated: 2023/09/21 13:30:38 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat constructor was created" << std::endl;
    try {
		this->_brain = new Brain();
	}
	catch(const std::exception& e) {
		std::cerr << "Dynamic allocation failed"<< std::endl;
	}
}

Cat::Cat(const Cat &clap) : AAnimal() {
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
	delete _brain;
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