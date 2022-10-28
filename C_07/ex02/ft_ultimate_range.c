/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:27:38 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/15 13:56:28 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;

	x = 0;
	if (min >= max)
	{
		*range = NULL;
		return (**range);
	}
	*range = (int *)malloc(((max - min) + 1) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		*range[x] = min;
		min++;
		x++;
	}
	*range[x] = 0;
	return (x);
}
