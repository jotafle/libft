/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:31 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 14:57:57 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	while (*s)
	{
		if (*s == (char)c)
		{
			ptr = (char *)s;
			return (ptr);
		}
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "Good day";
	//int	c;

	printf("%s\n", ft_strchr(s, 'd'));
	return(0);
}*/
