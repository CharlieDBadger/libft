/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:24:19 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:24:22 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * strrchr - Finds the last occurrence of a character in a string.
 * @s: The string to search in.
 * @c: The character to search for (passed as an integer, 
 *     typically a `char` value).
 * 
 * return: A pointer to the last occurrence of character `c` in the 
 *         string `s`.
 *         If the character is not found, returns NULL.
 *         If `c` is the null character (`\0`), 
 *         returns a pointer to the end of the string.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
		if (i < 0)
			break ;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str;
	char		c;
	char		*result;

	str = "Hello, world!";
	c = 'o';
	result = ft_strrchr(str, c);
	if (result)
		printf("Last occurrence of '%c': %s\n", c, result);
	else
		printf("Character '%c' not found\n", c);
	return (0);
}
*/
