/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:42:47 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/10 17:42:00 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index == 0)
		result = 0;
	else if (index == 1)
		result = 1;
	else
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
