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
 * ft_memmove - Copies memory area, handling potential overlap.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 * 
 * This function copies `n` bytes from the source memory area `src` 
 * to the destination memory area `dest`. If the source and destination
 * areas overlap, the copy is performed in such a way as to avoid data 
 * corruption by copying from the end of the regions to the beginning.
 * 
 * Return: A pointer to the destination memory area (`dest`).
 */
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = dest;
    s = (unsigned char *) src;
    if (d == NULL && s == NULL)
        return (NULL);
    if (s < d && (s + n) > d)  // Si las áreas de memoria se solapan, copiamos de atrás hacia adelante
    {
        d += n;
        s += n;
        while (n-- > 0)
            *(--d) = *(--s);
    }
    else  // Si no se solapan o no hay riesgo de solapamiento, copiamos de adelante hacia atrás
        while (n-- > 0)
            *d++ = *s++;
    return (dest);
}