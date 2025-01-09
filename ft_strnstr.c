/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:24:08 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:24:09 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * strnstr - Locates the first occurrence of the substring `little`
 *           in the string `big`, searching only up to `len` bytes.
 * @big: The main string to search within.
 * @little: The substring to find in `big`.
 * @len: The maximum number of bytes to search.
 *
 * Return: 
 * - A pointer to the first occurrence of `little` within `big`.
 * - NULL if `little` is not found within the first `len` bytes.
 * 
 * Notes:
 * - If `little` is an empty string, the function returns `big`.
 * - Search stops either when `len` bytes are exhausted or when a match
 *   for `little` is found.
 * - The function ensures that no out-of-bounds memory is accessed.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
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
