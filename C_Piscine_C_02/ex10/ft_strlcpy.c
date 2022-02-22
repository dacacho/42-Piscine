/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:20:15 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 21:03:01 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lth;

	lth = 0;
	while (src[lth] != '\0')
	{
		lth++;
	}
	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lth);
}
/*
int	main()
{
	char	a[] = "fuck norminette";
	char	b[20];
	strlcpy(b, a, 4);
	printf("%u", ft_strlcpy(b, a, 4));
}
*/
