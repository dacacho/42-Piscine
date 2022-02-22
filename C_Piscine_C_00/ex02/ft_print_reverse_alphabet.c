/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:22:50 by danierod          #+#    #+#             */
/*   Updated: 2022/01/21 09:40:04 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 122;
	while (alphabet != 96)
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
		return (0);
}
*/
