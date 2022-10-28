/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:53:33 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/08 09:06:37 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;
	int	pos;

	x = 0;
	pos = 0;
	while (str[x] != '\0')
	{
		if (str[pos] >= 65 && str[pos] <= 90)
			str[pos] = str[pos] + 32;
		x++;
		pos++;
	}
	return (str);
}
