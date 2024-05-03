/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:52 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/03 14:43:10 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void f(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, c);
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
