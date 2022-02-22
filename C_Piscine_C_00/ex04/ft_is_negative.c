/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:22:34 by danierod          #+#    #+#             */
/*   Updated: 2022/01/23 13:02:33 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	limbo;

	if (n >= 0)
	{
		limbo = 'P';
	}
	else
	{
		limbo = 'N';
	}
	write(1, &limbo, 1);
}

int	main()
{
	ft_is_negative(420);
	return (0);
}
