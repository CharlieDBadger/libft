/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:04:04 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/07 13:04:07 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * memchr - Scans the first n bytes of the memory area pointed to by ptr
 *          for the first occurrence of the character value.
 * @ptr: Pointer to the memory block to be searched.
 * @value: The byte value to search for.
 * @num: The number of bytes to search in the memory block.
 * 
 * Return: Returns a pointer to the first occurrence of value in the memory
 *         block, or NULL if the value is not found within the first n bytes.
 */
void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		if (s[i] == (unsigned char)value)
			return (&s[i]);
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
