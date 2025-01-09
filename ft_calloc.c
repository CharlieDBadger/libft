/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:14:26 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:14:28 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_calloc - Allocates memory for an array of elements and 
 * initializes it to zero.
 * @nmemb: The number of elements to allocate.
 * @size: The size in bytes of each element.
 *
 * This function calculates the total memory required as `nmemb * size`,
 * allocates it, and initializes all bytes to zero. The loop where 
 * `i < nmemb * size` ensures that each byte in the allocated memory 
 * is explicitly set to 0, fulfilling the requirement for zero initialization.
 * If the allocation fails, it returns NULL.
 *
 * Return: A pointer to the allocated and initialized memory, 
 * or NULL if the allocation fails.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb <= 0 || size <= 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb != 0 && size > (nmemb * size) / nmemb)
		return (NULL);
	ptr = (unsigned char **)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	count;
	size_t	size;
	int		*arr;
	size_t	i;

	count = 5;
	size = sizeof(int);
	arr = (int *)ft_calloc(count, size);
	if (!arr)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	i = 0;
	while (i < count)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
