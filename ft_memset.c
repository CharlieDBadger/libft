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
* ft_memset - Fills the first 'num' bytes of the memory area pointed to 
*            by 'ptr' with the constant byte 'value'.
* @ptr: A pointer to the memory area to be filled.
* @value: The value to set. It is passed as an int, but it's cast to
*         unsigned char to be stored byte by byte.
* @num: The number of bytes to be set to the value.
* return: A pointer to the memory area 'ptr'.
*/
void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[];

	str[] = "Hello, World!";
	printf("Before ft_memset: %s\n", str);
	ft_memset(str, 'X', 5);
	printf("After ft_memset: %s\n", str);
	return (0);
}
*/