/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:58:59 by danierod          #+#    #+#             */
/*   Updated: 2022/01/26 00:44:37 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (*(str + ++i))
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
		printf("%d\n", ft_str_is_lowercase(t));
	}

	if (res == ft_str_is_lowercase(t))

		printf("other types of characters");

	else

		printf("lowercase characters(or empty)");
    free (t);
    return 0;
}
*/
