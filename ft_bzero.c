/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:14:02 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:14:04 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* ft_bzero - Sets the first 'n' bytes of the memory area 
* pointed to by 's' to zero.
* @s: A pointer to the memory area to be filled.
*    's' refers to the memory location 
*     where the bytes will be set to zero.
* @n: The number of bytes to set to zero.
* return: None.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr = 0;
		ptr++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char buffer[10] = "TestData";
	int i = 0;
	printf("Before ft_bzero: %s\n", buffer);
	ft_bzero(buffer, 4);
	printf("After ft_bzero: ");
	while (i < 9)
	{
		if (buffer[i] == '\0')
			printf("\\0");
		else
			printf("%c", buffer[i]);
		i++;
	}
	printf("\n");
	return 0;
}
*/
