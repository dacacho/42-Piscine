/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:14:14 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 23:28:36 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] != '\0' && str[i + c] == to_find[c])
		{
			if (to_find[c + 1] == '\0')
				return (&str[i]);
			c++;
		}
		i++;
	}
	return (0);
}
/*
int main(void) 
{
    char *str = "help me please";
    char *dora = "pl";
    
    printf("%s\n", ft_strstr(str, dora));
}
*/
