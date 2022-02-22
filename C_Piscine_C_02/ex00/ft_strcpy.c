/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:22:31 by danierod          #+#    #+#             */
/*   Updated: 2022/01/25 19:21:42 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	s[] = "fuck norminette";
	char	d[15];
	char	*ptrs;
	char	*ptrd;
	int		i;

	i = 0;
	ptrs = s;
	ptrd = d;
	ptrd = ft_strcpy(ptrd, ptrs);
	while (ptrd[i] != '\0')
	{
		printf("%c", ptrd[i]);
		i++;
	}
}
*/
