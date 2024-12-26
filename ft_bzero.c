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
* ft_bzero - Sets the first 'len' bytes of the memory area pointed to by 's' to zero.
* @s: A pointer to the memory area to be filled. 's' refers to the memory location 
*     where the bytes will be set to zero.
* @len: The number of bytes to set to zero.
* return: None.
*/
void    ft_bzero(void *s, size_t len)
{
    unsigned char     *ptr;

    ptr = s;
    while (len-- > 0)
    {
        *ptr = 0;
        ptr++;
    }
}
