/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:10 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/07 14:29:11 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*dest;

	i = 0;
	dest = (char *) malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while ((i < start) && s[i])
		i++;
	j = 0;
	while (s[i] && j < len)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s[] = "Bom dia";
	unsigned int	start = 4;
	unsigned int	len = 3;

	char	*substring = ft_substr(s, start, len);
	if (substring != NULL)
	{
	printf("%s\n", substring);
	free(substring); // Libera a memória alocada para a substring
	}
	else
	{
	printf("Erro na alocação de memória.\n");
	}
	return(0);
}*/

/*
NO MAIN TIVE QUE CRIAR UM NOVO PONTEIRO *SUBSTRING
PARA PODER LIBERTAR A MEMORIA ALOCADA
SENAO O FREE NAO FUNCIONAVA NO MAIN

****REVER ISTO****

O PONTEIRO *SUBSTRING AO APONTAR PARA A FUNCAO VAI TAMBEM
RECEBER A ALOCACAO DE MEMORIA PARA DEPOIS A PODER LIBERTAT???
OU SEJA RECEBE TUDO O QUE A FUNCAO CONTIVER
*/
