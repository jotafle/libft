/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:54 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 15:33:32 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] && j < n)
	{
		if (s1[j] != s2[j])
			return ((unsigned char)s1[j] - (unsigned char)s2[j]);
		j++;
	}
	if (j < n)
		return ((unsigned char)s1[j] - (unsigned char)s2[j]);
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "12345";
	char	s2[] = "1234";
	int	n = 0;

	ft_strncmp(s1, s2, n);
	printf("%i\n", ft_strncmp(s1, s2, n));
	printf("%i\n", strncmp(s1, s2, n));
	return (0);
}*/
