/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:07 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/24 17:03:16 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stddef.h>
#include<stdio.h>
#include <stdlib.h>
int ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while(s[len])
		len++;
	return(len);
}

char *ft_strtrim(const char *s, const char *set)
{
	int	i;
	int	j;
	int	k;
	char	*dest;

	i = 0;
	j = 0;
	k = 0;

	dest = (char*) malloc((ft_strlen(s) + 1) * sizeof (char));
	while(s[i] == set[j])
		i++;
	while(s[i])
	{
		while(s[i] == set[j])
			i++;
		dest[k] = s[i];
		i++;
	//	j++;
		k++;
	}/*
	i = ft_strlen(s) - 1;
	while(s[i])
	{
		dest[k] = s[i];
		i--;
	}*/
	dest[k] = '\0';
	return(dest);
}

int	main(void)
{
	char	*s = "      Bom dia mundo!      ";
	char	*set = " ";
	char	*finalstring;

	finalstring = ft_strtrim(s,set);
	if(finalstring != NULL)
	{
		printf("%s\n", finalstring);
		free(finalstring);
	}
	else
		printf("Erro na alocacao de memoria.\n");
	return(0);
}
