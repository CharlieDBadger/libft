/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:19:08 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:19:10 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * memchr - Scans the first n bytes of the memory area pointed to by s
 *          for the first occurrence of the character value.
 * @s: Pointer to the memory block to be searched.
 * @c: The byte value to search for.
 * @n: The number of bytes to search in the memory block.
 * 
 * Return: Returns a pointer to the first occurrence of value in the memory
 *         block, or NULL if the value is not found within the first n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[13] = "Hello, World!";
	char	*result;

	result = ft_memchr(str, 'o', 13);
	if (result)
		printf("Found 'o' at position: %ld\n", result - str);
	else
		printf("'o' not found.\n");
	return (0);
}
*/
