/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:23:31 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:23:33 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* ft_strlen - Calculates the length of the string pointed to by 'str', 
*             excluding the null terminator.
* @str: The string whose length is to be calculated.
* return: The length of the string.
*/
size_t	ft_strlen(const char *str)
{
	size_t	count;

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
