/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:46 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 12:24:57 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int	main(void)
{
	const char	*src = "Hello, World";
	char	dst[15];
	size_t dstsize = sizeof(dst);
	ft_strlcpy(dst, src, dstsize);
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst, src, dstsize));
	return (0);
}
*/