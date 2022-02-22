/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:43:28 by danierod          #+#    #+#             */
/*   Updated: 2022/01/27 17:42:47 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while ((dest[i] != '\0') && (i < n))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	s[] = {"fuck norminette"};
	char	d[20];
	char	*ptr;

	ptr = ft_strncpy(d, s, 20);

	printf("%s\n", s);
	printf("%s", d);
}
*/
