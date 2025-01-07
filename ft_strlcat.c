/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:18:47 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/07 13:18:51 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * ft_strlcat - Appends a string to another, ensuring null-termination and 
 * size safety.
 * @dest: The destination string to which the source will be appended.
 * @src: The source string to append to the destination.
 * @size: The total size of the destination buffer, including space for 
 *        the null terminator.
 *
 * This function appends the first part of the `src` string to the 
 * `dest` string, ensuring that the destination string is 
 * null-terminated and doesn't exceed the specified size 
 * (including space for the null terminator). 
 * The function will only append up to `size - destlen - 1` characters from 
 * `src`, where `destlen` is the length of `dest` before the append operation.
 *
 * Return: 
 *  - The total length of the string that would have been created if 
 *    the destination buffer was large enough (i.e., `destlen + srclen`).
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			destlen;
	size_t			srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *)src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src[i] && i < size - destlen - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest1[50] = "Hello, ";
	char	dest2[20] = "Goodbye, ";
	char	src[] = "world!";

	size_t len1 = ft_strlcat(dest1, src, sizeof (dest1));
	printf("ft_strlcat - Dest: %s, Length: %zu\n", dest1, len1);

	size_t len2 = ft_strlcat(dest2, src, sizeof (dest2));
	printf("ft_strlcat - Dest: %s, Length: %zu\n", dest2, len2);

	return (0);
}
*/
