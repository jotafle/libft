/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:10 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/24 10:37:54 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stddef.h>
#include<stdio.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	const unsigned char *p1 = (const unsigned char *)s + start;
	//s += start;
	int	i;
	int	j;
	char	*dest;

	i = 0;
	j = 0;

	dest = (char *) malloc((len + 1) * sizeof(char));
	if(dest == NULL)
		return(NULL);
	while(s[i] != start && s[i])// Encontra a posição inicial da substring
		i++; // encerra com i = 4 (onde o i encontrou o start)
	j = i; // o j fica com index = 4
	while(s[i] && i < (start + len))
	{
		dest[i-j] = s[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char s[] = "Bom dia";
	char	start = 'd';
	int	len = 3;

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
}

/*
NO MAIN TIVE QUE CRIAR UM NOVO PONTEIRO *SUBSTRING
PARA PODER LIBERTAR A MEMORIA ALOCADA
SENAO O FREE NAO FUNCIONAVA NO MAIN

****REVER ISTO****

O PONTEIRO *SUBSTRING AO APONTAR PARA A FUNCAO VAI TAMBEM
RECEBER A ALOCACAO DE MEMORIA PARA DEPOIS A PODER LIBERTAT???
OU SEJA RECEBE TUDO O QUE A FUNCAO CONTIVER
*/
