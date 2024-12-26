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
 * ft_putchar_fd - Writes a character to a given file descriptor.
 * 
 * @c: The character to write.
 * @fd: The file descriptor to write to.
 * 
 * This function writes the character 'c' to the specified file descriptor 
 * using the system call 'write'. It allows output to be directed to 
 * different outputs (e.g., standard output, a file, etc.).
 */
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
#include <fcntl.h>
int main(void)
{
    char c = 'A';

    int fd = open("test.txt", O_WRONLY);

    ft_putchar_fd(c, fd);

    close(fd);

    return 0;
}
*/