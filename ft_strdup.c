/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:11:39 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/19 16:12:10 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
*/

/**
 * ft_strdup - Duplicates a given string by allocating memory dynamically.
 * @str: The original string to duplicate.
 *
 * This function creates a new string by allocating memory dynamically,
 * copying the content of the given string (including the null terminator).
 * It is the caller's responsibility to free the memory allocated by this 
 * function.
 *
 * Return:
 * - A pointer to the newly allocated string if successful.
 * - NULL if memory allocation fails.
 *
 * Note: The while loop in this implementation ensures that each character,
 * including the null terminator, is copied to the new memory location.
 */
char	*ft_strdup(const char *src)
{
	int		i;
	char	*strdup;

	i = 0;
	strdup = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!strdup)
		return (NULL);
	while (src[i] != '\0')
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*duplicated_str;

	str = "This is a test string.";
	duplicated_str = ft_strdup(str);
	if (duplicated_str)
	{
		printf("Original string: %s\n", str);
		printf("Duplicated string: %s\n", duplicated_str);
		free(duplicated_str);
	}
	else
	{
		printf("Memory allocation failed for the duplicated string.\n");
	}
	return (0);
}
*/