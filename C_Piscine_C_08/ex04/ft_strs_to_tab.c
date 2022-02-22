/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:31:03 by danierod          #+#    #+#             */
/*   Updated: 2022/02/03 19:56:37 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_clone(char *str)
{
	char	*final;
	int		i;

	final = malloc(ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		final[i] = str[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int				i;
	t_stock_str		*final;

	final = malloc((argc + 1) * sizeof(t_stock_str));
	if (!final)
		return (0);
	i = 0;
	while (i < argc)
	{
		final[i].size = ft_strlen(argv[i]);
		final[i].str = argv[i];
		final[i].copy = ft_str_clone(argv[i]);
		i++;
	}
	final[i].size = 0;
	final[i].str = 0;
	final[i].copy = 0;
	return ((struct s_stock_str *)final);
}
/*
int main (void)
{
	int i;
	struct s_stock_str *as;
	char *strings[3] ={ "DID", "I", "STUTTER"};
	int size = 3;
	as = ft_strs_to_tab(size, strings);
	i = 0;
	while (i < size)
	{
		printf("%d\n%s\n%s\n\n", as[i].size, as[i].str, as[i].copy);
		i++;
	}
	return(0);
}
*/
