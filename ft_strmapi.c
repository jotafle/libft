/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:52 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 12:36:05 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	f(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	size_t			i;
	char			*result;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	result = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		while (s[i] == ' ')
		{
			result[i] = s[i];
			i++;
		}
		if ((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z'))
			return (NULL);
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*s = "ola joao";
	printf("String original: %s\n", s);
	char *result = ft_strmapi(s, f);
	printf("Nova string: %s\n", result);
	free(result);
	return(0);
}*/
