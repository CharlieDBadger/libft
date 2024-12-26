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
int main(void)
{
    char c = 'A';

    if (ft_isalnum(c))
        printf("'%c' is alphanumeric.\n", c);
    else
        printf("'%c' is not alphanumeric.\n", c);

    return (0);
}
*/