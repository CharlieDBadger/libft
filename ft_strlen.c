/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:11:17 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/07 13:11:20 by cbolanos         ###   ########.fr       */
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
	char	str[] = "Hello, world!";;
	size_t	len;

	len = ft_strlen(str);
	printf("Length of the string: %zu\n", len);
	return (0);
}
*/
