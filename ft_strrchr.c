/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:01 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 12:43:44 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "Good day";

	printf("%s\n", ft_strrchr(s, 'o'));
	printf("%s\n", strrchr(s, 'o'));
	return(0);
}*/