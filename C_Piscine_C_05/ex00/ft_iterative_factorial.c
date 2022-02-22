/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:16:53 by danierod          #+#    #+#             */
/*   Updated: 2022/02/02 18:51:44 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	return (a);
}

int	main()
{
	printf("%d", ft_iterative_factorial(69));
	return (0);
}
