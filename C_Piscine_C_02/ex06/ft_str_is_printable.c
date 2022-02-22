/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:04:55 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 00:50:16 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (*(str + ++i))
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
	}
	return (1);
}

/*
int main(int argC, char *argV[])
{

    char *t = malloc(50);
	int	res;

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
		printf("%d\n", ft_str_is_printable(t));
	}

	if (res == ft_str_is_printable(t))

		printf("other types of characters");

	else

		printf("printable characters(or empty)");
    free (t);
    return 0;
}
*/
