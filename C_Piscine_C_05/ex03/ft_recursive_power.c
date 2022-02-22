/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:26:42 by danierod          #+#    #+#             */
/*   Updated: 2022/02/01 18:54:41 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power < 1 || nb == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main()
{
	printf("%d", ft_recursive_power(5, 3));
	return (0);
}
*/
