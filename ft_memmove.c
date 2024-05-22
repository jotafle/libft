/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:12 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/07 14:30:30 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s || d >= (s + n))
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = {'e','g','h','i'};
	char dest[] = {'a','b','c','d'};
	ft_memmove(dest, src, 4);
	memmove(dest, src, 4);
	//printf("%s\n", ft_memmove(dest, src, 4));
	//printf("%s\n", memmove(dest, src, 4));
	return(0);
}*/
