#include "libft.h"

/**
 * ft_strncmp - Compares up to n characters of two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * @n: The maximum number of characters to compare.
 *
 * This function compares the first n characters of the strings `s1` and `s2`. 
 * The comparison stops when a null terminator is encountered in either string, 
 * when a difference between characters is found, or when n characters have 
 * been compared. The comparison is performed using the ASCII values of the 
 * characters.
 *
 * Return: 
 *  - An integer less than 0 if `s1` is lexicographically less than `s2`.
 *  - 0 if the first n characters of both strings are equal.
 *  - An integer greater than 0 if `s1` is lexicographically greater than `s2`.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n -1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}