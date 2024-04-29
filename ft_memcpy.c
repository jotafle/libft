/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:04 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/18 14:25:33 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *p1;
	const unsigned char *p2;
	size_t	i;

	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	i = 0;

	while(n > 0)
	{
		p1[i] = p2[i];
		i++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = {'e','g','h','i'};
	char dest[] = {'a','b','c','d'};

	printf("%d\n", ft_memcpy(src, dest, 4));
	printf("%d\n", memcpy(src, dest, 4));
	return(0);
}*/

