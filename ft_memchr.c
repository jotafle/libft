/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:56 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 13:54:51 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = (unsigned char *)str;
	uc = c;
	while (n > 0)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
/*
int main(void)
{
	char str[] = {'a','b','c','d','e','g','h','i'};
	printf("%s\n", ft_memchr(str, 'e', 5));
	printf("%s\n", memchr(str, 'e', 5));
	return(0);
}*/
