/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:27:04 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/03 09:29:53 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	x = 0;
	while (x < size / 2)
	{
		swap = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = swap;
		x++;
	}
}
