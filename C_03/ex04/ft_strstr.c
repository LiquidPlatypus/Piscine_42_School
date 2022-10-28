/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrTEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:56:55 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/07 16:54:17 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y] && str[x + y] != '\0')
			y++;
		if (to_find[y] == '\0')
			return (str + x);
		x++;
		y = 0;
	}
	return (0);
}
