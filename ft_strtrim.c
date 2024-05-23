/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:07 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/23 11:53:55 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char check(char *set, char c)
{
	int i;
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(const char *s, const char *set)
{
	int		i;
	int		j;
	//int		k;
	//char	*dest;

	i = 0;
	j = ft_strlen(s) - 1;
	// k = 0;
	// dest = (char *)malloc((ft_strlen(s) + 1) * sizeof (char));
	while (s[i])
	{
		if (check((char *)set, s[i]))
			i++;
		else
			break;
	}
	while (j > 0)
	{
		if (check((char *)set, s[j]))
			j--;
		else
			break;
	}
	return (ft_substr(s, i, j - i + 1));
	//dest[k] = '\0';
	//return (dest);
}

// int	main(void)
// {
// 	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	printf("%s",ft_strtrim(s1, "olt"));
	
// 	// char	*s = "      Bom dia mundo!      ";
// 	// char	*set = " ";
// 	// char	*finalstring;
// 	// ft_strlen(s);

// 	// finalstring = ft_strtrim(s,set);
// 	// if(finalstring != NULL)
// 	// {
// 	// 	printf("%s", ft_strtrim(s,set));
// 	// 	free(finalstring);
// 	// }
// 	// else
// 	// 	printf("Erro na alocacao de memoria.\n");
// 	// return(0);
// }
