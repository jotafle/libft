/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:34 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 15:03:12 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*res;

	res = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	len = 0;
	while (s[len])
	{
		res[len] = s[len];
		len++;
	}
	res[len] = '\0';
	return (res);
	free (res);
}
/*
int	main(void)
{
	char	s[] = "-123";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
	return(0);
}*/
