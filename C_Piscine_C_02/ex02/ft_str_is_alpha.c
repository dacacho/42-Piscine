/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:44:05 by danierod          #+#    #+#             */
/*   Updated: 2022/01/31 16:26:00 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}


int main(int argC, char *argV[])
{

    char *t = malloc(50);
	int	res;

	res = 0;

    if (t == NULL)
	{
        printf("No memory\n");
        return 1;
    }

    printf("Type something:  ");

    fgets(t, 50, stdin);

    if ((strlen(t) > 0) && (t[strlen (t) - 1] == '\n'))
	{
		t[strlen (t) - 1] = '\0';
		printf("%d\n", ft_str_is_alpha(t));
	}
	
	if (res == ft_str_is_alpha(t))

		printf("other types of characters");

	else

		printf("alphabetic characters(or empty)");
    free (t);
    return 0;
}
