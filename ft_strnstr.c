/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:12:09 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/07 13:12:13 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * strnstr - Locates the first occurrence of the substring `needle`
 *           in the string `haystack`, searching only up to `len` bytes.
 * @haystack: The main string to search within.
 * @needle: The substring to find in `haystack`.
 * @len: The maximum number of bytes to search.
 *
 * Return: 
 * - A pointer to the first occurrence of `needle` within `haystack`.
 * - NULL if `needle` is not found within the first `len` bytes.
 * 
 * Notes:
 * - If `needle` is an empty string, the function returns `haystack`.
 * - Search stops either when `len` bytes are exhausted or when a match
 *   for `needle` is found.
 * - The function ensures that no out-of-bounds memory is accessed.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*haystack;
	const char	*needle;
	size_t		len;
	char		*result;

	haystack = "Hello, world!";
	needle = "world";
	len = 15;
	result = ft_strnstr(haystack, needle, len);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
	return (0);
}
*/
