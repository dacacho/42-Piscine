/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shows_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:45:29 by danierod          #+#    #+#             */
/*   Updated: 2022/02/03 20:08:21 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	a;

	a = 0;
	while (par[a].str != 0)
	{
		ft_putstr(par[a].str);
		ft_putstr("\n");
		ft_putnbr(par[a].size);
		ft_putstr("\n");
		ft_putstr(par[a].copy);
		ft_putstr("\n");
		a++;
	}
}
/*
int main(int argc, char **argv)
{
    ft_show_tab(ft_strs_to_tab(argc, argv));
}
*/
