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
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*s3rtn;
	int		i;
	int		j;

	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 == NULL)
		return (NULL);
	s3rtn = s3;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		s3[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		s3[j++] = s2[i++];
	s3[j] = '\0';
	return (s3rtn);
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
