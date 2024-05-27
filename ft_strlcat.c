/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:43 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/27 12:27:08 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	dst_len;
    size_t	src_len;
    size_t	i;
    size_t	j;
		
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
    i = dst_len;
	j = 0;
	if (size == 0)
        return (src_len);
    if (size <= dst_len)
        return (size + src_len);
    while (src[j] && i < (size - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}
/*
int	main(void)
{
	char	src[] = "bom dia!";
	char	dst[] = "joao";
	printf("%d\n", ft_strlcat(dst, src, 4));
	printf("%d\n", strlcat(dst, src, 4));
	return(0);
}*/
