/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:20:33 by mthea             #+#    #+#             */
/*   Updated: 2022/07/15 13:39:13 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{	
	int		i;
	int		nombres;

	i = 0;
	nombres = 0;
	while (str[i] != '\0')
	{
			i++;
			nombres++;
	}
	return (nombres);
}