/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:13:10 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/07 13:13:14 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
*/

/**
 * ft_strtrim - Removes characters from the beginning and end of 's1' 
 * that are present in the 'set' string.
 * 
 * @s1: The input string to trim.
 * @set: The set of characters to remove from the ends of 's1'.
 * 
 * This function trims characters from both ends of 's1' that are found 
 * in 'set'. It returns a new string with the trimmed result, or NULL if 
 * memory allocation fails.
 * 
 * Example:
 * ft_strtrim("  \tHello World!  \n", " \t\n") returns "Hello World!".
 * 
 * Return:
 * - A new trimmed string, or NULL if memory allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "   Hello, world!   ";
	char	set[] = " ";
	char	*result;

	result = ft_strtrim(str, set);
	printf("Trimmed string: '%s'\n", result);
	free(result);
	return (0);
}
*/
