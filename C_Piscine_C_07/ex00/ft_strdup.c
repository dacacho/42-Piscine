/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:40:07 by danierod          #+#    #+#             */
/*   Updated: 2022/02/02 17:43:37 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(src));
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main()
{
	char	src[] = "final.count.down";

	printf("%s\n", src);
	printf("%s\n", ft_strdup(src));
	return (0);
}
*/
