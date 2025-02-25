/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:24:42 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:24:44 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_substr - Extracts a substring from a given string.
 * @s: The string from which the substring will be extracted.
 * @start: The starting index of the substring in the original string.
 * @len: The maximum length of the substring to be extracted.
 * 
 * Return: A newly allocated string containing the substring, or
 *         NULL if memory allocation fails or if the starting index
 *         is out of bounds.
 *
 * This function copies a substring from the original string `s`, starting at 
 * the index `start` and with a maximum length of `len`. If `start` exceeds
 * the length of the original string, it returns an empty string. If the 
 * substring length is shorter than `len`, it copies the maximum possible length.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	char	*subsrtn;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		subs = (char *)malloc(sizeof(char));
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	subsrtn = subs;
	while (s[start] && len--)
		*subs++ = s[start++];
	*subs = '\0';
	return (subsrtn);
}
/*
#include <stdio.h>

int	main(void)
{
	char			str[] = "Hello, world!";
	unsigned int	start;
	size_t			len;
	char			*result;

	start = 7;
	len = 5;
	result = ft_substr(str, start, len);
	printf("Substring: '%s'\n", result);
	free(result);
	return (0);
}
*/
