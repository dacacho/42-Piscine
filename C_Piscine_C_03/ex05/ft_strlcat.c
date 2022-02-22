/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:33:10 by danierod          #+#    #+#             */
/*   Updated: 2022/01/27 00:21:13 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cdt;
	unsigned int	csc;
	unsigned int	otp;

	cdt = 0;
	csc = 0;
	otp = 0;
	while (dest[cdt])
		cdt++;
	while (src[otp])
		otp++;
	if (size <= cdt)
		otp += size;
	else
		otp += cdt;
	while (src[csc] && (cdt + 1) < size)
	{
		dest[cdt] = src[csc];
		cdt++;
		csc++;
	}
	dest[cdt] = '\0';
	return (otp);
}
/*
int	main(void) 
{
  char str1[] = "help me please";
  char str2[] = "im dying";

  printf("%i", ft_strlcat(str1, str2, sizeof(str1)));
}
*/
