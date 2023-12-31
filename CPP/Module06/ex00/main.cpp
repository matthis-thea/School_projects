/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:34:46 by haze              #+#    #+#             */
/*   Updated: 2023/11/24 15:12:38 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: Please enter literal\n" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (1);
}