/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:02:04 by danierod          #+#    #+#             */
/*   Updated: 2022/01/23 12:56:23 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 96;
	while (alphabet++ < 'z')
	{
		write(1, &alphabet, 1);
	}
}

int	main()
{
	ft_print_alphabet();
	return (0);
}
