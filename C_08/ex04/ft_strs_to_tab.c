/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:02:01 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/18 10:02:01 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		x;

	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	x = 0;
	while (src[x])
	{
		str[x] = src[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			x;

	tab = malloc(sizeof(*tab) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		tab[x].size = ft_strlen(av[x]);
		tab[x].str = av[x];
		tab[x].copy = ft_strdup(av[x]);
		x++;
	}
	tab[x].str = 0;
	return (tab);
}
