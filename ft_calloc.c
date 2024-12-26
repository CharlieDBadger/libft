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
#include <stdio.h>
/**
 * ft_calloc - Allocates memory for an array of elements and initializes it to zero.
 * @num: The number of elements to allocate.
 * @size: The size in bytes of each element.
 *
 * This function calculates the total memory required as `num * size`,
 * allocates it, and initializes all bytes to zero. The loop where 
 * `i < num * size` ensures that each byte in the allocated memory 
 * is explicitly set to 0, fulfilling the requirement for zero initialization.
 * If the allocation fails, it returns NULL.
 *
 * Return: A pointer to the allocated and initialized memory, or NULL if the allocation fails.
 */
void    *ft_calloc(size_t num, size_t size)
{
    void *ptr;
    size_t i;

    if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
    ptr = malloc(num * size);
    if (ptr == NULL)
        return NULL;
    i = 0;
    while (i < num * size)
    {
        ((unsigned char *)ptr)[i] = 0;
        i++;
    }
    return ptr;
}
/*
int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(count, size);
    if (!arr)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }
    size_t i = 0;
    while (i < count)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
        i++;
    }
    free(arr);
    return (0);
}
*/