/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:00 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/07 14:30:23 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esta funcao recebe dois pointers para duas zonas da memoria a comparar
Recebe tambem o numero de bytes a comparar
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (n > 0)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
		n--;
	}
	return (0);
}
/*
int main(void)
{
	char s1[] = {'a','b', 'e','g','h','i'};
	char s2[] = {'a','c','o','e','g','h','i'};
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s1, s2, 5));
	return(0);
}*/
