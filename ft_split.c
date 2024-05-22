/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:04 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/22 10:02:48 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrings(const char *s, char c)
{
	int	i;
	int	nstrs;

	i = 0;
	nstrs = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nstrs++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nstrs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	*dest1;
	char	**result;

	result = (char **)malloc((count_substrings(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] != c)
				len++;
			dest1 = (char *)malloc((len + 1) * sizeof (char));
			if (!dest1)
				return (NULL);
		}
	}
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;
	char	**result;
	int		k;

	k = 0;
	c = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[c] && c < size - 1)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = 0;
	return (ft_strlen(src));
	result[k] = NULL;
	return (**result);
}
/*
int	main(void)
{
	char	*s = " Bom dia mundo! ";
	char	c = ' ';
	char	**finalstring;

	finalstring = ft_split(s, c);
	if(finalstring != NULL)
	{
		int	i = 0;
		while(finalstring[i] != NULL)
		{
			printf("%s\n", finalstring[i]);
			free(finalstring[i]);
			i++;
		}
		free(finalstring);
	}
	else
		printf("Erro na alocacao de memoria.");
	return(0);
}
*/
