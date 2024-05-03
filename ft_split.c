/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:04 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/03 12:07:20 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
RETURNS AN ARRAY OF STRINGS OBTAINED BY SPLITING "S" USING CARACTER
"C" AS A DELIMITER     ***MUST END WITH A NULL POINTER***    */
#include <stdlib.h>
#include <stdio.h>
static int	cont_words(const char *s, char c)
{
	int	i;
	int	nstrs;

	i = 0;
	nstrs = 0;
		while(s[i])
		{
			if(s[i] != c)
			{
				nstrs++;
				while(s[i] && s[i] != c)
					i++;
			}
			else
				i++;
	}
	return (nstrs);
}

char **ft_split(char const *s, char c)
{
	auto int i, j, k, nstrs, len;
	auto char *dest1, **result;
	j = 0;
	k = 0;
	nstrs = cont_words(s, c);
	dest1 = NULL;// PRECISA DEST LINHA?
	//PRIMEIRO CONTAR O NUMERO DE STRINGS
	// alocar memoria para o array de strings
	result = (char **)malloc((nstrs + 1) * sizeof(char *));
	if(!result)
		return(NULL);
	i = 0;
	while(s[i])
	{
		if(s[i] != c)
		{	//contar tamanho de cada substring
			len = 0;
			while(s[i + len] && s[i + len] != c)
				len++;
			dest1 = (char *)malloc((len + 1) * sizeof (char));
			//copiar caracteres para a substring
			if(!dest1)
				return(NULL);
			j = 0;
			while(j < len)
				dest1[j++] = s[i++];
			dest1[j] = '\0';
			result[k] = dest1;
			k++;
			//dest1[0] = '\0';
			//i++; este i++ faz entrar numa quarta string q n existe
		}
		else
			i++;
	}
	result[k] = NULL; //da erro no python tutor
	return(result);
}

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
