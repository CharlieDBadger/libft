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
 * ft_isalpha - Checks if the given character is an alphabetic letter.
 * 
 * @c: The character to check.
 * 
 * This function returns 1 if the character 'c' is an alphabetic letter (A-Z or a-z),
 * and 0 otherwise.
 * 
 * Return: 1 if 'c' is a letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    char c = 'B';

    if (ft_isalpha(c))
        printf("'%c' is an alphabetic character.\n", c);
    else
        printf("'%c' is not an alphabetic character.\n", c);

    return (0);
}
*/