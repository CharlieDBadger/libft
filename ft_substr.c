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
	size_t	i;
	char	*subs;
	char	*subsrtn;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	i = start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	subsrtn = subs;
	while (s[i] != '\0' && i < start + len)
	{
		*subs = s[i];
		subs++;
		i++;
	}
	*subs = '\0';
	return (subsrtn);
}

/*
int main(void)
{
    char str[] = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    char *result = ft_substr(str, start, len);

    printf("Substring: '%s'\n", result);

    free(result);

    return 0;
}
*/