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
 * count_words - Counts the number of words in a string based on a delimiter.
 * @s: The input string to be analyzed.
 * @c: The delimiter character used to separate the words.
 * 
 * Returns the number of words found in the string `s` that are separated 
 * by the character `c`. Consecutive delimiters are ignored.
 * 
 * Notes:
 * - A word is defined as a sequence of characters that does not contain `c`.
 * - This function does not modify the input string.
 */
static int  count_words(char const *s, char c)
{
    int count;

    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s != '\0')
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}

/**
 * free_memory - Frees the memory of an array of strings.
 * @array: The array of strings to be freed.
 * @count: The number of strings to free.
 * 
 * Frees the memory previously allocated for the strings in the array and 
 * for the array itself. This is used mainly as a cleanup mechanism in case 
 * of a memory allocation error.
 * 
 * Notes:
 * - It only frees up to `count` strings, so make sure `count` is less than 
 *   or equal to the size of the array.
 */
static char **free_memory(char **array, int i)
{
    while (i--)
        free(array[i]);
    free(array);
    return (NULL);
}

/**
 * extract_words - Extracts words from a string based on a delimiter and stores them in an array.
 * @s: The input string to split.
 * @c: The delimiter character.
 * @array: The array where the words will be stored.
 * 
 * This function splits the input string `s` into words separated by the delimiter `c`.
 * Each word is allocated with `ft_substr` and stored in `array`. If memory allocation
 * fails, the function will free all previously allocated words and return NULL.
 * 
 * Returns: The updated array of words or NULL if an error occurs.
 */
static char **extract_words(char const *s, char c, char **array)
{
    int i;
    int word_length;

    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s == '\0')
            break;
        word_length = 0;
        while (s[word_length] && s[word_length] != c)
            word_length++;
        array[i] = ft_substr(s, 0, word_length);
        if (!array[i]) {
            free_memory(array, i);
            return (NULL);
        }
        s += word_length;
        i++;
    }
    array[i] = (NULL);

    return (array);
}

/**
 * ft_split - Splits a string into an array of words, using a specified delimiter.
 * @s: The string to split.
 * @c: The delimiter character.
 * 
 * This function splits the input string `s` into an array of words, where each word
 * is delimited by the character `c`. It uses `extract_words` to perform the actual
 * word extraction and handles memory allocation for the array of words.
 * 
 * Returns: The array of words, or NULL if memory allocation fails.
 */
char **ft_split(char const *s, char c)
{
    char **array;

    if (!s)
        return (NULL);
    array = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
    if (!array)
        return (NULL);
    array = extract_words(s, c, array);
    return (array);
}

/**
 * ft_split - Splits a string into an array of strings based on a delimiter.
 * @s: The input string to be split.
 * @c: The delimiter character used to separate the words.
 * 
 * Returns an array of strings (null-terminated) containing each word 
 * from the string `s`, separated by the character `c`. If memory allocation 
 * fails, the function returns NULL.
 * 
 * Notes:
 * - Consecutive delimiter characters are ignored.
 * - If `s` is empty or contains no words, the returned array will contain 
 *   only a NULL pointer.
 *//*
char    **ft_split(char const *s, char c)
{
    int     i;
    int     word_length;
    char    **array;

    if (!s)
        return (NULL);
    array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!array)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s != '\0')
        {
            word_length = 0;
            while (s[word_length] && s[word_length] != c)
                word_length++;
            array[i] = ft_substr(s, 0, word_length);
            if (!array[i++])
                return (free_memory(array, i - 1));
            s += word_length;
        }
    }
    array[i] = NULL;
    return (array);
}
*/
