/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:47:57 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/10 16:46:28 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_strswap(char **str1, char **str2);
int		ft_strcmp(char *a, char *b);

int	main(int argc, char **argv)
{
	int		x;

	x = 0;
	while (x < argc - 1)
	{
		if (ft_strcmp(argv[x], argv[x + 1]) > 0)
		{
			ft_strswap(&argv[x], &argv[x + 1]);
			x = 0;
		}
		x++;
	}
	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
	return (0);
}

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

void	ft_strswap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *a, char *b)
{
	int	x;

	x = 0;
	while (a[x] && a[x] == b[x])
		x++;
	return (a[x] - b[x]);
}
