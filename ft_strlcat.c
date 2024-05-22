/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:43 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/22 11:55:53 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t	dlen;
	size_t	slen;
	size_t	total;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	total = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	while (src[slen])
		slen++;
	total += (dlen + slen);
	while (i < dlen && i < size - 1)
		dst[dlen++] = src[slen++];
	if (total < size)
		dst[dlen] = '\0';
	return (total);
}

int	main(void)
{
	char	src[] = "bom dia!";
	char	dst[] = "ola, ";
	int		size = 20;
	printf("%d\n", ft_strlcat(dst, src, size));
	printf("%d\n", strlcat(dst, src, size));
	printf("%s\n", dst);
	return(0);
}

