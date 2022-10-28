/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:14:14 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/11 09:16:25 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	index;

	x = nb;
	if (x <= 0)
		return (0);
	if (x == 1)
		return (1);
	index = 2;
	if (x >= 2)
	{
		while (index * index <= x)
		{
			if (index * index == x)
				return (index);
			index++;
		}
	}
	return (0);
}
