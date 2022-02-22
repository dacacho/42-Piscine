/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinCPCT.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:22:27 by danierod          #+#    #+#             */
/*   Updated: 2022/02/03 13:20:36 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(int size, char **strs, char *sep)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			b++;
		}
		c += b;
		if (a == size - 1)
			break ;
		b = 0;
		while (sep[b] != '\0')
		{
			b++;
		}
		c += b;
		a++;
	}
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		y;
	int		z;
	int		len;
	char	*final;

	len = ft_strlen(size, strs, sep);
	final = (char *) malloc ((len + 1) * sizeof(char));
	x = 0;
	y = 0;
	while (y < size)
	{
		z = 0;
		while (strs[y][z])
			final[x++] = strs[y][z++];
		if (y + 1 < size)
		{
			z = 0;
			while (sep[z])
				final[x++] = sep[z++];
		}
		y++;
	}
	final[x] = '\0';
	return (final);
}
/*
int	main(void)
{
	int		size;
	char	*sep;
	char	*strs[3];
	char	*final;

	size = 3;
	sep = " OK? ";
	strs[0] = "don't touch me";
	strs[1] = "pls just don't";
	strs[2] = "I'm gonna call the police!";
	final = ft_strjoin(size, strs, sep);
	printf("arg 1: %s\n", strs[0]);
	printf("arg 2: %s\n", strs[1]);
	printf("arg 3: %s\n", strs[2]);
	printf("sep: %s\n", sep);
	printf("%s\n", final);
}
*/
