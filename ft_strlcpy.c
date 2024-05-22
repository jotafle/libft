/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:46 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 12:49:18 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;

	c = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[c] && c < size - 1)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = 0;
	return (ft_strlen(src));
}
/*
int	main(void)
{
	const char	*src = "Hello, World";
	char	*dst;
	size_t dstsize = sizeof(dst);
	ft_strlcpy(dst, src, dstsize);
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst, src, dstsize));
	return (0);
}*/
