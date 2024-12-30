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
int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[];
	size_t	len;

	str[] = "Hello, world!";
	len = ft_strlen(str);
	printf("Length of the string: %zu\n", len);
	return (0);
}
*/