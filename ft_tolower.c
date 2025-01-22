/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:25:21 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:25:23 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* ft_tolower - Converts an uppercase letter to its lowercase equivalent.
*              If the input character is not an uppercase letter,
*              it is returned unchanged.
* @c: The character to be converted.
* return: The lowercase equivalent of the character if it's uppercase,
*         or the character itself if no conversion is necessary.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World!";;
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("Lowercase string: '%s'\n", str);
	return (0);
}
*/
