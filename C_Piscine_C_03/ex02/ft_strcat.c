/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:41:00 by danierod          #+#    #+#             */
/*   Updated: 2022/01/27 00:15:20 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (dest[length])
		length++;
	while (src[i])
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = {"fuck norminette"};
	char	b[30] = {"laminette"};

	ft_strcat(b, a);
	printf("%s", b);
	return (0);
}
*/
