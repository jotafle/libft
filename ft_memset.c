/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:16 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/27 18:38:46 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{
	int	i;
	unsigned char *p = (unsigned char *)str; // Casting to char*

	i = 0;
	while(i < n)
	{
		p[i] = (unsigned char)c;// Setting individual bytes
		i++;
	//	n--;
	}
	return(s);
}

int	main(void)
{
	char str[] = {'e','g','h','i','\0'};
	//char	s[15];
	printf("%s\n", ft_memset(str, 'b', 3));
	printf("%s\n", memset(str, 'a', 2));
	return (0);
}
