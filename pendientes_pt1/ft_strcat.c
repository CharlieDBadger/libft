/**
 * strcat - Concatenates two strings.
 *
 * Appends the string `src` to the end of `dest`. There is **no buffer overflow check**, 
 * so it's the programmer's responsibility to ensure `dest` is large enough to hold 
 * the concatenated result. If `dest` is too small, it will cause a **buffer overflow**.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * return: The concatenated string `dest`.
 */
char *ft_strcat(char *dest, const char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0') 
        i++;
    while (src[j] != '\0') 
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
