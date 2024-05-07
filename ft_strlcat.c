/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:43 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/07 10:02:57 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	i = dst_len;
	dst_len = 0;
	src_len = 0;
	total_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	total_len = dst_len + src_len;
	while (i < src_len && i < size - 1)
		dst[i++] = *src++;
	if (dst_len < size)
		dst[i] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char src[] = {'e','g','h','i', '\0'};
	char dst[] = {'a','b','c','d', '\0'};
	int	total_len;
	ft_strlcat(src, dst, total_len);
	printf("%ld\n", ft_strlcat(src, dst, total_len));
	printf("%d\n", strlcat(src, dst, total_len));
	return(0);
}*/
