/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:34 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/03 12:28:16 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *ft_strdup(const char *s)
{
	int	len;
	char	*res;

	len = 0;
	while (s[len])
		len++;
	res = (char *) malloc((len + 1) * sizeof(char));
	len = 0;
	while(s[len])
	{
		res[len] = s[len];
		len++;
	}
	res[len] = '\0';
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
