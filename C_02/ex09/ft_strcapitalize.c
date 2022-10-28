/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:28 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/08 09:14:49 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	pos;

	x = 0;
	pos = 1;
	ft_lowercase(str);
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (pos == 1)
				str[x] -= 32;
			pos = 0;
		}
		else if (str[x] >= '0' && str[x] <= '9')
			pos = 0;
		else
			pos = 1;
		x++;
	}
	return (str);
}
