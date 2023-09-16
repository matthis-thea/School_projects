/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:58:58 by mthea             #+#    #+#             */
/*   Updated: 2022/07/15 10:14:45 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		resultat;
	int		reste;

	resultat = *a / *b;
	reste = *a % *b;
	*a = resultat;
	*b = reste;
}
