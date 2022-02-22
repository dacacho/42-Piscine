/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:56:42 by danierod          #+#    #+#             */
/*   Updated: 2022/02/02 17:02:53 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == 32)
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = c * 10 + (str[a] - 48);
			a++;
	}
	return (c * b);
}

int	main()
{
	char	str[] = " -+-+-+-+-+u69420ab567";

	printf("%d", ft_atoi(str));
	return (0);
}

