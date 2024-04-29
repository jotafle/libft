/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:52 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/29 17:01:43 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	f(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
// Convert character to uppercase
		if (c >= 'a' && c <= 'z')
		{
			//char *result = (char *)malloc(sizeof(char));
			//result = c - 'a' + 'A';
			return(c - 'a' + 'A');
		}
	}
	// If index is odd or character is not lowercase, return the
	else
		return(c);
	return(0);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
// Determine length of input string
	while(s[len])
		len++;
// Allocate memory for new string
char *result = (char*)malloc((len + 1) * sizeof(char));
// Apply function f to each character of input string
	while(i < len)
	{
		while(s[i] == ' ')
		{
			result[i] = s[i];
			i++;
		}
		if((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z'))
			{
				printf("Erro na string.\n");
				return(NULL);
			}
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return(result);
}

int	main(void)
{
	char	*s = "ola joao";
	printf("String original: %s\n", s);
	char *result = ft_strmapi(s, f);
	printf("Nova string: %s\n", result);
	free(result);
	return(0);
}
