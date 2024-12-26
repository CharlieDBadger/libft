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
#include <stdio.h>
/**
* ft_bzero - Sets the first 'len' bytes of the memory area pointed to by 's' to zero.
* @s: A pointer to the memory area to be filled. 's' refers to the memory location 
*     where the bytes will be set to zero.
* @len: The number of bytes to set to zero.
* return: None.
*/
void    ft_bzero(void *s, size_t len)
{
    unsigned char     *ptr;

    ptr = s;
    while (len-- > 0)
    {
        *ptr = 0;
        ptr++;
    }
}

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