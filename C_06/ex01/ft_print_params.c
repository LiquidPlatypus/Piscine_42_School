/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:19:29 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/10 11:30:18 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	x;

	(void) argc;
	(void) argv;
	x = 1;
	while (argv[x] != NULL)
	{
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
	return (0);
}
