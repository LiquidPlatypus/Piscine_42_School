/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:31:32 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/08 09:43:40 by tbournon         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	lenght;

	x = ft_strlenght(src);
	lenght = 0;
	while (dest[lenght] && lenght < size)
		lenght++;
	while (src[x] && size && lenght + x < size - 1)
	{
		dest[lenght + x] = src[x];
		x++;
	}
	if (lenght < size)
		dest[lenght + x] = 0;
		x = 0;
	while (src[x])
		x++;
	return (lenght + x);
}
