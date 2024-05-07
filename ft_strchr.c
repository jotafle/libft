/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:31 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 12:12:11 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "Good day";
	//int	c;

	printf("%s\n", ft_strchr(s, 'd'));
	return(0);
}
*/