/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:22 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/27 17:18:55 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

int	main(void)
{
	int	fd;
	char	*str = "joao";

	fd = 1;
	ft_putendl_fd(str, fd);
	return(0);
}
