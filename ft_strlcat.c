/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:43 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/22 14:16:43 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	res = (char *)malloc(sizeof (char) * (i + j) + 1);
	j = 0;
	i = 0;
	while (src[j] && (size - 1) > 0)
		res[i++] = dst[j++];
	j = 0;
	while (src[j] != '0')
		res[i++] = src[j++];
	res[i] = '\0';
	return (*res);
}
/*
int	main(void)
{
	char	src[] = "bom dia!";
	char	dst[] = "ola, ";
	//int		size = 20;
	printf("%s\n", ft_strlcat(dst, src, 20));
	printf("%s\n", strlcat(dst, src, 20));
	return(0);
}*/
