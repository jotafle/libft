/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:34 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/22 16:16:42 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *ft_strdup(const char *s)
{
	int	n;
	int	len;
	char	*res;

	len = 0;
	while (s[len])
		len++;
	res = (char *) malloc(len * sizeof(char));
	len = 0;
	while(s[len])
	{
		res[len] = s[len];
		len++;
	}
	return(res);
	free(res);
}

int	main(void)
{
	char	s[] = "-123";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
	return(0);
}
