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
 * ft_isascii - Checks if the given character is an ASCII character.
 * 
 * @c: The character to check.
 * 
 * This function returns 1 if the character 'c' is a 
 * valid ASCII character 
 * (i.e., its value is between 0 and 127 inclusive), and 0 otherwise.
 * 
 * Return: 1 if 'c' is an ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    char c = 127;

    if (ft_isascii(c))
        printf("'%c' is an ASCII character.\n", c);
    else
        printf("'%c' is not an ASCII character.\n", c);

    return (0);
}
*/