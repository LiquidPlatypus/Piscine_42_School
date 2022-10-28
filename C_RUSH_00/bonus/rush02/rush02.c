/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:36:59 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/03 18:25:35 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
void	ft_x(int i, int x_max);
void	ft_y(int i, int y_max);

void	print_ligne(int x_max, int y_max, int y)
{
	int		i;

	i = 1;
	if (y == 1 || y == y_max)
	{
		ft_x(i, x_max);
	}
	else
	{
		ft_y(i, x_max);
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	while (i <= y)
	{	
		print_ligne(x, y, i);
		i++;
	}
}

void	ft_x(int i, int x_max)
{
	char	a;
	char	b;
	char	c;

	i = 1;
	a = 'A';
	b = 'B';
	c = 'C';
	while (i <= x_max)
	{
		if (i == 1)
		{
			ft_putchar(a);
			if (x_max == 1)
				ft_putchar('\n');
		}
		else if (i == x_max)
		{
			ft_putchar(c);
			ft_putchar('\n');
		}
		else
			ft_putchar(b);
		i++;
	}
}

void	ft_y(int i, int x_max)
{
	char	b;

	i = 1;
	b = 'B';
	while (i <= x_max)
	{
		if (i == 1)
		{
			ft_putchar(b);
			if (x_max == 1)
				ft_putchar('\n');
		}
		else if (i == x_max)
		{
			ft_putchar(b);
			ft_putchar('\n');
		}
		else
			ft_putchar(' ');
		i++;
	}
}
