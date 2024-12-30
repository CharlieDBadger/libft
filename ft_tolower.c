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
* ft_strlen - Calculates the length of the string pointed to by 'str',
*             excluding the null terminator.
* @str: The string whose length is to be calculated.
* return: The length of the string.
*/
char	*ft_tolower(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World!";;
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("Lowercase string: '%s'\n", str);
	return (0);
}
*/