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

/*
 * putnbr_recursive - Recursively writes the digits of a number to the 
 *                    given file descriptor.
 * @n: The number to be written.
 * @fd: The file descriptor to which the digits will be written.
 * 
 * This helper function recursively processes the digits of the number 'n',
 * starting from the most significant digit and writing each digit to the file
 * descriptor. The recursion continues until all digits are written. The function
 * handles each digit by converting it to a character and writing it to the file.
 * 
 * Returns the original number 'n' after all digits have been processed.
 */
static int	putnbr_recursive(long n, int fd)
{
	char	c;

	c = '0';
	if (n / 10 == 0)
		return (n);
	c = c + (putnbr_recursive(n / 10, fd) % 10);
	write (fd, &c, 1);
	return (n);
}

/**
 * ft_putnbr_fd - Writes the integer 'n' to the given file descriptor.
 * @n: The integer to be written.
 * @fd: The file descriptor to which the integer will be written.
 * 
 * This function writes the integer 'n' to the specified file descriptor
 * by first handling the sign (if negative), then using recursion to
 * print each digit of the number starting from the most significant digit
 * to the least significant one. Finally, it writes the number to the file.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	c = '0';
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	putnbr_recursive(nbr, fd);
	c = c + nbr % 10;
	write(fd, &c, 1);
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
	ft_putnbr_fd(1234, fd);
	ft_putnbr_fd(-5678, fd);
	ft_putnbr_fd(0, fd);
	close(fd);
	return (0);
}
*/
