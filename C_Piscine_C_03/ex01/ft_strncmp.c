/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:27:26 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 20:56:38 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = {"fuck norminette"};
	char	str2[] = {"fuck moulinette"};
  
   if ( ft_strncmp (str1, str2, 4) == 0 )
	   printf("the first 4 elements are identical");
   else
	   printf("the first 4 elements are different");
   return (0);
}
*/
