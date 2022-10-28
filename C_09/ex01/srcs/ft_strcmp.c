/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:34:08 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/19 18:34:15 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
