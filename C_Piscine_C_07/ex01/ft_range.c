/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:03:27 by danierod          #+#    #+#             */
/*   Updated: 2022/02/02 20:23:41 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	i = 0;
	new = (int *) malloc ((max - min) * sizeof (int));
	if (min >= max)
	{
		new = NULL;
		return (new);
	}
	i = 0;
	while (min < max)
	{
		new[i] = min;
		min++;
		i++;
	}
	return (new);
}
/*
int	main()
{
	int	i;
	int *new;

	i = 0;
	printf("69...421\n");
	new = ft_range(69, 421);
	while (new[i])
	{
		printf("%d\t", new[i]);
		i++;
	}
	return (0);
}
*/
