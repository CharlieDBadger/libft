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
 * ft_striteri - Applies a function to each character of a string, 
 * passing its index and a pointer to the character as arguments.
 * 
 * @s: The string to iterate over.
 * @f: The function to apply to each character.
 * 
 * This function iterates over the string 's', applying the function 'f' 
 * to each character. The index and a pointer to each character are passed 
 * to the function 'f', allowing modification of the original string.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
    while (s[i])  // Iterate through the string until the null-terminator
    {
        f(i, s + i);  // Pass the index and the pointer to the current character
        i++;
    }
}

/*
int main(void)
{
    char str[] = "hello world";

    ft_striteri(str, ft_toupper);

    printf("Uppercase string: %s\n", str);

    return 0;
}
*/