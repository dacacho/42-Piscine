/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:39:13 by danierod          #+#    #+#             */
/*   Updated: 2022/02/01 15:58:31 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_comp(char *s6, char *s9)
{
	int	x;

	x = 0;
	while (s6[x] == s9[x] && s6[x] != '\0' && s9[x] != '\0')
	{
		x++;
	}
	return (s6[x] - s9[x]);
}

int	print_arg(int argc, char **argv)
{
	int	i;
	int	a;

	i = 1;
	while (i < argc)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			write(1, &argv[i][a], 1);
			a++;
		}
		argv[i][a] = '\0';
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		a;
	char	*swap;

	a = 1;
	while (a < argc - 1)
	{
		if (str_comp(argv[a], argv[a + 1]) > 0)
		{
			swap = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = swap;
			a = 1;
		}
		else
			a++;
	}
	print_arg(argc, argv);
	return (0);
}
