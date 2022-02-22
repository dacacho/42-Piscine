/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:05:17 by danierod          #+#    #+#             */
/*   Updated: 2022/02/02 20:19:18 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc ((max - min) * sizeof (int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main()
{
	int	length;
	int	*range;

	printf("min: 69\nmax: 420\n");
	length = ft_ultimate_range(&range, 69, 420);
	printf("size: %d\n", length);
	return (0);
}
*/
