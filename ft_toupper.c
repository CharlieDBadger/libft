/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:11:39 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/05 16:12:10 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
* ft_tolower - Converts all uppercase letters in the string 'str' to lowercase.
* @str: The string to be converted.
* return: A pointer to the converted string, or NULL if the input string is NULL.
*/
char	*ft_toupper(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int main(void)
{
    char str[] = "hello, world!";

    int i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }

    printf("Uppercase string: '%s'\n", str);

    return 0;
}
*/