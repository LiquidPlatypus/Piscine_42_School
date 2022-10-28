/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:53:38 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/09 10:56:03 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_erreur(char *base, int *erreur)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*erreur = 1;
	while (base[x] && *erreur == 0)
	{
		y = x;
		while (base[y] != '\0')
		{
			y++;
			if (base[x] == base[y])
				*erreur = 1;
		}
		if (base[x] == '+' || base[x] == '-' || base[x] == '%'
			|| base[x] == '/' || base[x] == '*' || base[x] == '='
			|| base[x] == ',' || base[x] == '.'
			|| base[x] < 33 || base[x] > 126)
			*erreur = 1;
		else
			x++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lbase;
	int		erreur;
	long	nb;

	lbase = 0;
	erreur = 0;
	ft_erreur(base, &erreur);
	nb = nbr;
	if (erreur == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb]);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
			ft_putnbr_base(nb % lbase, base);
		}
	}
}
