/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:55:26 by danierod          #+#    #+#             */
/*   Updated: 2022/02/01 19:46:12 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
/*
int	main()
{
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(3));
	printf("%d", ft_fibonacci(5));
	return (0);
}
*/
