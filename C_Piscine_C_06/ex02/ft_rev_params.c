/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:49:30 by danierod          #+#    #+#             */
/*   Updated: 2022/01/31 19:30:18 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	z;

	a = argc - 1;
	z = 0;
	if (argc > 1)
	{
		while (a != '\0')
		{
			z = 0;
			while (argv[a][z] != '\0')
			{
				ft_putchar(argv[a][z]);
				z++;
			}
			ft_putchar('\n');
			a--;
		}
	}
	return (0);
}
