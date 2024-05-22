/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:40 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 15:09:54 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen1(const char *s1)
{
	int	len1;

	len1 = 0;
	while (s1[len1])
		len1++;
	return (len1);
}

int	ft_strlen2(const char *s2)
{
	int	len2;

	len2 = 0;
	while (s2[len2])
		len2++;
	return (len2);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	int		i;
	int		j;
	int		total;

	i = 0;
	j = 0;
	total = ft_strlen1(s1) + ft_strlen2(s2);
	new = (char *) malloc((total + 1) * sizeof(char));
	if (new == 0)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
	free (new);
}
/*
int	main(void)
{
	char	*s1 = "Bom dia, ";
	char	*s2 = "good morning!";
	char	*finalstring;

	finalstring = ft_strjoin(s1,s2);
	if(finalstring != NULL)
	{
		printf("%s\n", finalstring);
		free(finalstring);
	}
	else
		printf("Erro na alocação de memória.\n");
	return(0);
}*/
