/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:20:25 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:20:26 by cbolanos         ###   ########.fr       */
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
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	char	c;
	int		fd;

	c = 'A';
	fd = open("test.txt", O_WRONLY);
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}
*/
