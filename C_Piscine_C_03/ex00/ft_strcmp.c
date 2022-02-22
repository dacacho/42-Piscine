/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:31:11 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 19:26:40 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char str1[] = {"fuck norminette"};
	char str2[] = {"fuck moulinette"};
	
	if ( ft_strcmp (str1, str2) == 0 )
		printf("identical strings");
	else
		printf("different strings \n");
	return (0);
}
*/
