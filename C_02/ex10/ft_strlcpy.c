/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:24:15 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/08 09:28:18 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlenght(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = ft_strlenght(src);
	y = 0;
	if (x + 1 < size)
	{
		while (y < x + 1)
		{
			dest[y] = src[y];
			y++;
		}
	}
	else if (size > 0)
	{
		while (y < size - 1)
		{
			dest[y] = src[y];
			y++;
		}
		dest[y] = 0;
	}
	return (x);
}
