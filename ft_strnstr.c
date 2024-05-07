/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:05:50 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 12:42:52 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	size_t	i;
	int		j;

	ptr = NULL;
	i = 0;
	j = 0;
	while ((i < len) && big[i] && little[j])
	{
		if (big[i] == little[j])
		{
			if (j == 0)
				ptr = (char *)&big[i];
			j++;
		}
		else
		{
			j = 0;
			ptr = NULL;
		}
		i++;
	}
	if (little[j] == '\0')
		return (ptr);
	return (NULL);
}
/*
int main(void) {
    const char *big = "Foo Bar Baz";
    const char *little = "Bar";
    char *ptr;

    ptr = ft_strnstr(big, little, 15);
    if (ptr != NULL) {
        // Print the found substring
        while (*ptr && *ptr != ' ')
		{
            putchar(*ptr);
            ptr++;
        }
        putchar('\n');
    } else {
        printf("Substring not found\n");
    }

    return 0;
}*/