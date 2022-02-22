/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:02:51 by danierod          #+#    #+#             */
/*   Updated: 2022/02/02 14:32:46 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	a;

	a = 1;
	if (nb <= 0)
		return (0);
	while (a * a < nb)
		a++;
	if (a * a == nb)
		return (a);
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(178));
	return (0);
}
*/
