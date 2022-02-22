/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:58:01 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 21:31:47 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	cap_me(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && ! cap_me(str[i]))
			i++;
		if (str[i] && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] = ((str[i] - 'a') + 'A');
		i++;
		while (str[i] && cap_me(str[i]))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = ((str[i] - 'A') + 'a');
			i++;
		}
	}
	return (str);
}
/*
int	main()
{
	char a[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um.";
	ft_strcapitalize(a);
	printf("%s", a);
}
*/
