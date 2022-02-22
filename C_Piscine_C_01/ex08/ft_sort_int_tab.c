/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:26:43 by danierod          #+#    #+#             */
/*   Updated: 2022/01/22 22:16:53 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	index;

	while (size >= 0)
	{
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				swap = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = swap;
			}
			index++;
		}
		size--;
	}
}
