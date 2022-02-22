/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:02:41 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 00:47:37 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (*(str + ++i))
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
		printf("%d\n", ft_str_is_uppercase(t));
	}

	if (res == ft_str_is_uppercase(t))

		printf("other types of characters");

	else

		printf("uppercase characters(or empty)");
    free (t);
    return 0;
}
*/
