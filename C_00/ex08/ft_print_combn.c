/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:50:52 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/01 14:42:47 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	a;
	char	b;

	a = '0';
	while (a < '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			if (!(a == '8' && b == '9'))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
