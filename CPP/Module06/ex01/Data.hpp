/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:47:17 by haze              #+#    #+#             */
/*   Updated: 2023/11/25 11:54:31 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA
#define DATA
#include <stdint.h>
#include <iostream>
struct Data
{
	std::string name;
	int			number;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif