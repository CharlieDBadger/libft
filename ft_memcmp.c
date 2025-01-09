/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:19:19 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:19:26 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcmp - Compares two blocks of memory byte by byte.
 * @s1: Pointer to the first block of memory.
 * @s2: Pointer to the second block of memory.
 * @n: Number of bytes to compare.
 * 
 * Return: 
 *   - 0 if the memory blocks are equal up to the given number of bytes.
 *   - A positive value if the first differing byte in ptr1 is greater 
 *	   than the corresponding byte in ptr2.
 *   - A negative value if the first differing byte in ptr1 is less 
 *     than the corresponding byte in ptr2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "World";
	int		result;

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
	return (0);
}
*/
