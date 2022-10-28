/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbournon <tbournon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:00:35 by tbournon          #+#    #+#             */
/*   Updated: 2022/09/21 15:17:25 by tbournon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlenght(char **str);
char	*ft_strcpy(char *dest, char *src);
int		ft_taille_reel(char **strings, int size, int sep_length);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		taille_reel;
	char	*megachaine;
	char	*buffer;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	taille_reel = ft_taille_reel(strs, size, ft_strlenght(&sep));
	buffer = (megachaine = (char *)malloc((taille_reel + 1) * sizeof(char)));
	if (buffer == NULL)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(buffer, strs[index]);
		buffer += ft_strlenght(&strs[index]);
		if (index > size - 1)
		{
			ft_strcpy(buffer, sep);
			buffer += ft_strlenght(&sep);
		}
		index++;
	}
	*buffer = '\0';
	return (megachaine);
}

int	ft_strlenght(char **str)
{
	int	index;

	index = 0;
	while (str[index] != NULL)
		index++;
	return (index);
}

int	ft_taille_reel(char **str, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_strlenght(&str[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int main()
{
	char **strs;
	char *sep;
	char *result;
	int size;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[0] = (char *)malloc(sizeof(char) * 4 + 1);
	strs[0] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[0] = "bonjour";
	strs[1] = "test";
	strs[2] = "au revoir";
	sep = "  ";
	size = 3;
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
	return 0;
}
 