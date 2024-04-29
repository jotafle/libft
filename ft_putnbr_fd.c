/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:25 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/27 17:55:41 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<unistd.h>
void ft_putchar_fd(char c, int fd)
	{
		write(fd, &c, 1);
	}

void ft_putnbr_fd(int n, int fd)
{
	if((n < 2147483647) && (n > -2147483648))
	{
		if(n == 0)
			write(fd, "0", 1);
		if(n == -2147483648)
			write(fd, "-2147483648", 1);
		if(n < 0)
		{
			ft_putchar_fd('-', fd);
			n*= -1;
		}
		if(n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else// QDO N < 10 E >= 0, ESCREVE ESSE ULTIMO CARACTER COM A FUNCAO PUTCHAR
			ft_putchar_fd(n + '0', fd);
	}
}

int	main(void)
{
	int	fd;
	int	n;

	n = -1234;
	fd = 1;
	ft_putnbr_fd(n, fd);
	write(fd, "\n", 1);
	return(0);
}
