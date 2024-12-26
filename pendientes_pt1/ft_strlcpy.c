#include "libft.h"
/**
 * ft_strlcpy - Copies a string from the source to the destination buffer
 *              while ensuring null-termination and preventing buffer overflow.
 * @dest: Pointer to the destination buffer where the string will be copied.
 * @src: Pointer to the source string to be copied.
 * @size: The size of the destination buffer.
 *
 * This function copies up to (size - 1) characters from the source string 
 * to the destination buffer and null-terminates the result if size > 0.
 * If the size parameter is 0, no bytes are copied, and the function simply 
 * returns the length of the source string.
 *
 * Return: The total length of the source string (`src`), regardless of 
 * whether the entire string was copied. This allows the caller to determine 
 * if truncation occurred by comparing the return value with the size parameter.
 */
size_t    *ft_strlcpy(char *dest, const char *src, size_t size)
{
    int     i;
    size_t     srclen;

    i = 0;
    srclen = ft_strlen(src);
    if(size == 0)
        return (srclen);
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srclen);
}