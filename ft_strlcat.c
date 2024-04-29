/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:43 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/19 13:14:14 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t dst_len;
	size_t src_len;
	size_t total_len;

	dst_len = 0;
	src_len = 0;
	total_len = 0;

	// Find the length of the destination string
 	while (dst[dst_len] != '\0' && dst_len < size)
			dst_len++;
			//dst_len = 4

	// Find the length of the source string
	while (src[src_len] != '\0')
		src_len++;
		//src_len = 4

	// Calculate the total length of the concatenated string
	total_len = dst_len + src_len;
			//total_len = 8

	// Copy characters from src to dest,
	// taking care not to exceed size - 1
	size_t i = dst_len; //para comecar a copiar a partir do fim da dst
	while (src_len > 0 && i < size - 1)
	{
		dst[i++] = *src++;
		src_len--;
	}
	// Null-terminate the resulting string
	if (dst_len < size)
		dst[i] = '\0';

	// Return the total length of the concatenated string
	return total_len;
}
int	main(void)
{
	char src[] = {'e','g','h','i', '\0'};
	char dst[] = {'a','b','c','d', '\0'};
	int	total_len = 0;
	ft_strlcat(src, dst, total_len);
	printf("%d\n", ft_strlcat(src, dst, total_len));
	//printf("%d\n", strlcat(src, dst, 9));
	return(0);
}
