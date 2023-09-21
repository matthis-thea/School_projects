/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:18:32 by haze              #+#    #+#             */
/*   Updated: 2023/09/21 13:04:53 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* animals[8] = { new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat() };
    for ( int i = 0; i < 8; i++ ) {
        delete animals[i];
    }

    delete j;//should not create a leak
    delete i;


    return 0;
}