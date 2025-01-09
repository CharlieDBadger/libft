/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:17:14 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:17:16 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isdigit - Checks if the given character is a digit.
 * 
 * @c: The character to check.
 * 
 * This function returns 1 if the character 'c' is a digit 
 * (i.e., between '0' and '9'),
 * and 0 otherwise.
 * 
 * Return: 1 if 'c' is a digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = '5';
	if (ft_isdigit(c))
		printf("'%c' is a digit.\n", c);
	else
		printf("'%c' is not a digit.\n", c);
	return (0);
}
*/
