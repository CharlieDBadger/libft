/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:05:02 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/07 13:05:05 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
* ft_memcpy - Copies memory area from source to destination.
* @dest: A pointer to the destination memory area.
* @src: A pointer to the source memory area.
* @n: The number of bytes to copy.
* 
* return: A pointer to the destination memory area (dest).
* 
* This function copies `n` bytes from the memory area pointed to by `src`
* to the memory area pointed to by `dest`. The memory areas must not 
* overlap. If the memory areas do overlap, the behavior is undefined.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello, World!";;
	char	dest[20];

	ft_memcpy(dest, src, 13);
	printf("Source: %s\n", src);
	printf("Destination after ft_memcpy: %s\n", dest);
	return (0);
}
*/
