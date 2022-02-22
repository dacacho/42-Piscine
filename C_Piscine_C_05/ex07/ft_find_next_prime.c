/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:38:53 by danierod          #+#    #+#             */
/*   Updated: 2022/02/02 12:54:32 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
/*
int	main()
{
	printf("5\t%d\n", ft_find_next_prime(5));
	printf("16\t%d\n", ft_find_next_prime(16));
	printf("23\t%d\n", ft_find_next_prime(23));
	printf("32\t%d\n", ft_find_next_prime(32));
	printf("59\t%d\n", ft_find_next_prime(59));
	printf("74\t%d\n", ft_find_next_prime(74));
	printf("163\t%d\n", ft_find_next_prime(163));
	printf("282\t%d\n", ft_find_next_prime(282));
	printf("313\t%d\n", ft_find_next_prime(313));
	printf("762\t%d\n", ft_find_next_prime(762));
	printf("997\t%d\n", ft_find_next_prime(997));
	return (0);
}
*/
