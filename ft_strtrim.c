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
 * ft_strtrim - Removes characters from the beginning and end of 's1' 
 * that are present in the 'set' string.
 * 
 * @s1: The input string to trim.
 * @set: The set of characters to remove from the ends of 's1'.
 * 
 * This function trims characters from both ends of 's1' that are found 
 * in 'set'. It returns a new string with the trimmed result, or NULL if 
 * memory allocation fails.
 * 
 * Example:
 * ft_strtrim("  \tHello World!  \n", " \t\n") returns "Hello World!".
 * 
 * Return:
 * - A new trimmed string, or NULL if memory allocation fails.
 */
char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *trimmed;

    if (!s1 || !set)
        return (NULL);
    
    // Encuentra el inicio de la cadena, después de los caracteres de set
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start])) // ft_strchr busca el carácter en set
        start++;
    
    // Encuentra el final de la cadena, antes de los caracteres de set
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1])) // Se mueve hacia atrás
        end--;
    
    // Si la cadena está vacía o solo consistía de caracteres del conjunto
    len = end - start;
    trimmed = (char *)malloc(len + 1);
    if (!trimmed)
        return (NULL);
    // Copia los caracteres de la cadena original a la nueva
    ft_strlcpy(trimmed, s1 + start, len + 1); // Copia la subcadena desde `start` hasta `end`
    return (trimmed);
}