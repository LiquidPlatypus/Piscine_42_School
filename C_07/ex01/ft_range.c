/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:33:19 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/15 13:56:20 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	buffer;

	buffer = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(((max - min) + 1) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (buffer < (max - min + 1))
	{
		tab[buffer] = min + buffer;
		buffer++;
	}
	return (tab);
}
