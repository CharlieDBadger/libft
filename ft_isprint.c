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
 * ft_isprint - Checks if the given character is a printable character.
 * 
 * @c: The character to check.
 * 
 * This function returns 1 if the character 'c' is a printable character 
 * (i.e., its value is between 32 and 126 inclusive, according to ASCII),
 * and 0 otherwise.
 * 
 * Return: 1 if 'c' is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	if (ft_isprint(c))
		printf("'%c' is a printable character.\n", c);
	else
		printf("'%c' is not a printable character.\n", c);
	return (0);
}
*/