/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:14:29 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/22 10:01:20 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_len(char const *str, char c);
static char		**ft_free(char **strs, int count);

char	**ft_split(char const *s, char c)
{
	auto char **result;
	auto int i, j;
	if (!s)
		return (NULL);
	result = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = ft_substr(s, i, word_len(&s[i], c));
			if (!result[j])
				return (ft_free(result, j));
			j++;
			i += word_len(&s[i], c);
		}
		else
			i++;
	}
	result[j] = 0;
	return (result);
}

static char	**ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	word_len(char const *str, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			len++;
		}
		else if (str[i] == c)
			break ;
		i++;
	}
	return (len);
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
