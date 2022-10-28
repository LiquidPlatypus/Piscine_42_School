/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:40:50 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/09 12:48:31 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		nb = nb * power;
		return (nb);
	}
}
