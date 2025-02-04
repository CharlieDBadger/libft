/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:22:58 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:23:00 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strjoin - Concatenates two strings into a newly allocated string.
 * 
 * @s1: The first string to join.
 * @s2: The second string to join.
 * 
 * This function concatenates 's1' and 's2' into a new string, 
 * allocating sufficient memory for the combined result. It then 
 * copies both strings into the newly allocated memory and returns 
 * the concatenated string.
 * 
 * Example:
 * ft_strjoin("Hello, ", "World!") returns "Hello, World!".
 * 
 * Return:
 * - A newly allocated string containing the concatenation of 's1' and 's2',
 *   or NULL if memory allocation fails.
 */
char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	char	*ptr;
	size_t	len1;
	size_t	len2;

	if (!s1)
		s1 = ft_strdup("");
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(len1 + len2 + 1);
	if (!s3)
		return (free(s1), NULL);
	ptr = s3;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	free(s1 - len1);
	return (s3);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*result;

	str1 = "Hello ";
	str2 = "world!";
	result = ft_strjoin(str1, str2);
	printf("Joined string: %s\n", result);
	free(result);
	return (0);
}
*/
