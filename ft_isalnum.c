/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:15:16 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:15:22 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalnum - Checks if the given character is alphanumeric.
 * 
 * @c: The character to check.
 * 
 * This function returns 1 if the character 'c' is either an alphabetic letter 
 * (A-Z or a-z) or a digit (0-9), and 0 otherwise.
 * 
 * Return: 1 if 'c' is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'A';
	if (ft_isalnum(c))
		printf("'%c' is alphanumeric.\n", c);
	else
		printf("'%c' is not alphanumeric.\n", c);
	return (0);
}
*/
