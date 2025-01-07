/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:10:54 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/07 13:10:59 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * ft_strlcpy - Copies a string from the source to the destination buffer
 *              while ensuring null-termination and preventing buffer overflow.
 * @dest: Pointer to the destination buffer where the string will be copied.
 * @src: Pointer to the source string to be copied.
 * @size: The size of the destination buffer.
 *
 * This function copies up to (size - 1) characters from the source string 
 * to the destination buffer and null-terminates the result if size > 0.
 * If the size parameter is 0, no bytes are copied, and the function simply 
 * returns the length of the source string.
 *
 * Return: The total length of the source string (`src`), regardless of 
 * whether the entire string was copied. This allows the caller to determine 
 * if truncation occurred by comparing the return value with the size parameter.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest1[20];
	char	dest2[10];
	char	src[] = "Hello, world!";

	size_t len1 = ft_strlcpy(dest1, src, sizeof(dest1));
	printf("ft_strlcpy - Dest: %s, Length: %zu\n", dest1, len1);

	size_t len2 = ft_strlcpy(dest2, src, sizeof(dest2));
	printf("ft_strlcpy - Dest: %s, Length: %zu\n", dest2, len2);

	return (0);
}
*/
