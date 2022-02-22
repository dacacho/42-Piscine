/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:21:20 by danierod          #+#    #+#             */
/*   Updated: 2022/01/21 09:51:58 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(int *nums, int n)
{
	int	a;
	int	b;

	b = 1;
	a = 0;
	while (++a < n)
		if (nums[a - 1] >= nums[a])
			b = 0;
	if (!b)
		return ;
	a = -1;
	while (++a < n)
		ft_putchar(nums[a] + 48);
	if (nums[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	nums[10];

	if (n > 10 || n < 0)
		return ;
	a = -1;
	while (++a < n)
		nums[a] = a;
	while (nums[0] <= (10 - n) && n >= 1)
	{
		ft_print_nums(nums, n);
		if (n == 10)
			break ;
		nums[n - 1]++;
		a = n;
		while (a && n > 1)
		{
			a--;
			if (nums[a] > 9)
			{
				nums[a - 1]++;
				nums[a] = 0;
			}
		}
	}
}

/*
int	main(void)
{
	ft_print_combn(3);
	return (0);
}
*/
