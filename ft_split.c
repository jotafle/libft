/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:04 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/23 13:34:09 by jfleming         ###   ########.fr       */
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
char	**free_array(char **result)
{
	int	i;
	while (i)
	{
		free(result[i]);
		i--;
	}
	free(result);
	return (NULL);
}

char	*write_word(char *word, char *s, int pos, int len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		word[i] = s[pos - len];
		len--;
		i++;
	}
	word[i] = '\0';
	return ((char *)word);
}

char **function(char **result, char c, char *s)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		result[j] = (char *)malloc((len + 1) * sizeof (char));
		if (!result[j])
			return(free_array(result));
		result[j] = write_word(result[i], s, i, len);
		j++;
	}
	result[j] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	result = (char **)malloc((count_substrings(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = function(result, c, (char *)s);
	return (result);
}

// int	main(void)
// {
// 	char	*s = " Bom dia mundo! ";
// 	char	c = ' ';
// 	char	**finalstring;

// 	finalstring = ft_split(s, c);
// 	if(finalstring != NULL)
// 	{
// 		int	i = 0;
// 		while(finalstring[i] != NULL)
// 		{
// 			printf("%s\n", finalstring[i]);
// 			free(finalstring[i]);
// 			i++;
// 		}
// 		free(finalstring);
// 	}
// 	else
// 		printf("Erro na alocacao de memoria.");
// 	return(0);
// }

