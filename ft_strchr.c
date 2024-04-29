/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:31 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/29 16:19:04 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
//The strchr() function returns a pointer to the first occurrence
//of the character c in the string s

//The strchr() functions return a pointer to the matched character
//or NULL if the character  is not found

//The terminating null byte is considered part of the string, so
//that if c is specified as '\0', these functions return a pointer to
//the terminator.

char *ft_strchr(const char *s, int c)
{
	char	*ptr;
	int	i;

	ptr = NULL;
	i = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return(ptr);
		}
		i++;
	}
	return(NULL);
}

int	main(void)
{
	char	*s = "Good day";
	//int	c;

	printf("%s\n", ft_strchr(s, 'd'));
	return(0);
}
