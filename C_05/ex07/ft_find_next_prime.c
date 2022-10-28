/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:40:56 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/12 14:27:02 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (0);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (0);
	while (x <= (nb / 2))
	{
		if (!(nb % x))
			return (0);
		x++;
	}
	return (1);
}
