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
 * ft_putendl_fd - Writes a string followed by a newline to a 
 * given file descriptor.
 * 
 * @s: The string to write.
 * @fd: The file descriptor to write to.
 * 
 * This function writes each character of the string 's' to the specified 
 * file descriptor 'fd', and then writes a newline character ('\n').
 * It ensures the string is followed by a newline, useful for printing lines 
 * of text with proper line breaks.
 */
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, s + i, 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int main(void)
{
    int fd = open("test.txt", O_WRONLY);

    ft_putendl_fd("Hello, World!", fd);

    close(fd);
    return 0;
}
*/