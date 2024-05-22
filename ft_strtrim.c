/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:07 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 15:18:43 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 0;
	j = 0;
	k = 0;
	dest = (char *) malloc((ft_strlen(s) + 1) * sizeof (char));
	while (s[i])
	{
		while (s[i] == set[j])
			i++;
		dest[k] = s[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
	free (dest);
}
/*
int	main(void)
{
	char	*s = "      Bom dia mundo!      ";
	char	*set = "i";
	char	*finalstring;

	finalstring = ft_strtrim(s,set);
	if(finalstring != NULL)
	{
		printf("%s", ft_strtrim(s,set));
		free(finalstring);
	}
	else
		printf("Erro na alocacao de memoria.\n");
	return(0);
}*/
