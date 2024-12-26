/**
 * ft_strcpy - Copies a string from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 * 
 * Copies the string from `src` to `dest`, including the terminating null byte.
 * The destination string must be large enough to hold the contents of the source string,
 * including the null terminator.
 * 
 * Return: A pointer to the destination string `dest`.
 */
char    *ft_strcpy(char *dest, const char *src)
{
    int     i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}