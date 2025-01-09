/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:12:41 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:12:45 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_atoi - Converts a string to an integer.
 * @str: The input string to be converted.
 *
 * This function parses the given string to extract an integer value. 
 * It handles optional leading whitespaces, an optional '+' or '-' sign, 
 * and converts consecutive numeric characters into an integer.
 *
 * Return: The integer representation of the string. If no valid conversion 
 *         is performed, returns 0.
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	n = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			n = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Input: \"42\" => Output: %d\n", ft_atoi("42"));
	printf("Input: \"   -42\" => Output: %d\n", ft_atoi("   -42"));
	printf("Input: \"+++123\" => Output: %d\n", ft_atoi("+++123"));
	printf("Input: \"  +0\" => Output: %d\n", ft_atoi("  +0"));
	printf("Input: \"abc\" => Output: %d\n", ft_atoi("abc"));
	printf("Input: \"---123abc\" => Output: %d\n", ft_atoi("---123abc"));
	return (0);
}
*/
