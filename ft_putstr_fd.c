/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:21:59 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:22:01 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putstr_fd - Writes a string to a given file descriptor, 
 *                one character at a time.
 * 
 * @s: The string to write.
 * @fd: The file descriptor to write to.
 * 
 * This function iterates through the string 's' and writes 
 * each character 
 * to the specified file descriptor using the system call 'write'.
 * It ensures each character is written individually.
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, s + i, 1);
		i++;
	}
}
/*
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY);
	if (fd == -1)
		return (1);
	ft_putstr_fd("Hello, world!", fd);
	close(fd);
	return (0);
}
*/
