/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:08:56 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 12:05:05 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '0';
		i++;
	}
}
/*
int	main(void)
{
	char s[] = {'e','g','h','i','\0'};
	ft_bzero(s, 2);
	printf("%s\n", s);
	//printf("%s\n", bzero(s, 5));
	return (0);
}*/