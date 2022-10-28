/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stupcase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:20:07 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/05 10:51:17 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	x;
	int	pos;

	x = 0;
	pos = 0;
	while (str[x] != '\0')
	{
		if (str[pos] >= 97 && str[pos] <= 122)
			str[pos] = str[pos] - 32;
		x++;
		pos++;
	}
	return (str);
}