/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:56:46 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/09 12:15:28 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	whitespaces(char *str, int *ptnr_x)
{
	int	x;
	int	compteur;

	x = 0;
	compteur = 1;
	while ((str[x] >= 9 && str[x] <= 12) || str[x] == 32)
		x++;
	while (str[x] && (str[x] == 43 || str[x] == 45))
	{
		if (str[x] == 45)
			compteur *= -1;
			x++;
	}
	*ptnr_x = x;
	return (compteur);
}

int	ft_atoi_base(char *str, char *base)
{
	int	x;
	int	result;
	int	signe;

	x = 0;
	result = 0;
	signe = whitespaces(str, &x);
	while (str[x] && str[x] >= 48 && str[x] <= 57)
	{
		result *= 10;
		result += str[x] - 48;
		x++;
	}
	result *= signe;
	return (result);
}
