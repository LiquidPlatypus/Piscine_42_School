/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:43 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/15 09:06:23 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	int		lenght;
	char	*memoire_alloue;

	lenght = ft_strlen(src) + 1;
	memoire_alloue = (char *)malloc(lenght);
	if (memoire_alloue == NULL)
		return (NULL);
	else
	{
		ft_strcpy(memoire_alloue, src);
	}
	return (memoire_alloue);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

/* int	main()
{
	char src[] = "salut les amis";
	char *duplicate;

	duplicate = ft_strdup(src);
	printf("%s\n", duplicate);
	printf("%lu", sizeof(duplicate));
	return 0;
} */
