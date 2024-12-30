/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:11:39 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/05 16:12:10 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * strchr - Locates the first occurrence of a character in a string.
 * @str: The string to search in.
 * @c: The character to search for.
 * 
 * Return: 
 * - A pointer to the first occurrence of @c in @str, 
 *   or NULL if the character is not found.
 * - If @c is '\0', returns a pointer to the null terminator of the string.
 */
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[];
	char	c;
	char	*result;

	str[] = "Hello, world!";
	c = 'o';
	result = ft_strchr(str, c);
	if (result)
		printf("First occurrence of '%c': %s\n", c, result);
	else
		printf("Character '%c' not found in string.\n", c);
	return (0);
}
*/