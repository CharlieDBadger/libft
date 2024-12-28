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
 * ft_strmapi - Applies a function to each character of a string, 
 * passing its index and character as arguments.
 * 
 * @s: The input string.
 * @f: The function to apply to each character.
 * 
 * This function creates a new string where each character is the result of 
 * applying 'f' to the corresponding character of 's'.
 * 
 * Return:
 * - A new string with the modified characters, or NULL if memory 
 *   allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int main(void)
{
    char str[] = "Hello, world!";

    size_t len = ft_strlen(str);

    printf("Length of the string: %zu\n", len);

    return 0;
}
*/