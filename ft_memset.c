/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:20:15 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:20:17 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* ft_memset - Fills the first 'num' bytes of the memory area pointed to 
*            by 's' with the constant byte 'c'.
* @s: A pointer to the memory area to be filled.
* @c: The value to set. It is passed as an int, but it's cast to
*         unsigned char to be stored byte by byte.
* @n: The number of bytes to be set to the value.
* return: A pointer to the memory area 's'.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World!";

	printf("Before ft_memset: %s\n", str);
	ft_memset(str, 'X', 5);
	printf("After ft_memset: %s\n", str);
	return (0);
}
*/
