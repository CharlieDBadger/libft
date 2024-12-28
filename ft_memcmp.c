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
 * ft_memcmp - Compares two blocks of memory byte by byte.
 * @ptr1: Pointer to the first block of memory.
 * @ptr2: Pointer to the second block of memory.
 * @num: Number of bytes to compare.
 * 
 * Return: 
 *   - 0 if the memory blocks are equal up to the given number of bytes.
 *   - A positive value if the first differing byte in ptr1 is greater 
 *	   than the corresponding byte in ptr2.
 *   - A negative value if the first differing byte in ptr1 is less 
 *     than the corresponding byte in ptr2.
 */
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	i = 0;
	while (i < num)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    int result;

    result = ft_memcmp(str1, str2, 5);
    if (result == 0)
        printf("str1 and str2 are identical.\n");
    else
        printf("str1 and str2 are different.\n");

    result = ft_memcmp(str1, str3, 5);
    if (result == 0)
        printf("str1 and str3 are identical.\n");
    else
        printf("str1 and str3 are different.\n");

    return 0;
}
*/