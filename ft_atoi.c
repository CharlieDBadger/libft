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
int     ft_atoi(char *str)
{
    int i;
    int n;
    int result;

    i = 0;
    n = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            n = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * n);
}
/*
int main(void)
{
    // Test cases
    printf("Input: \"42\" => Output: %d\n", ft_atoi("42"));              // Positive number
    printf("Input: \"   -42\" => Output: %d\n", ft_atoi("   -42"));      // Negative number with spaces
    printf("Input: \"+123\" => Output: %d\n", ft_atoi("+123"));          // Positive number with '+'
    printf("Input: \"  +0\" => Output: %d\n", ft_atoi("  +0"));          // Zero
    printf("Input: \"abc\" => Output: %d\n", ft_atoi("abc"));            // Invalid input
    printf("Input: \"123abc\" => Output: %d\n", ft_atoi("123abc"));      // Numbers followed by letters

    return 0;
}
*/
