/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:05:50 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/22 10:28:50 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
/*
DESCRIPTION
The  strstr()  function  finds  the  first  occurrence  of  the
substring needle in the string haystack.  The terminating null
bytes ('\0') are not compared.
*/

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr = NULL;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while((i < len) && big[i] && little[j])
	{
		if(big[i] == little[j])
		{
			if(j == 0)
				ptr = (char *)&big[i]; // Record the potential start of the substring
			j++;
		}
		else
		{
			j = 0; // Reset j to start from the beginning of the substring
			ptr = NULL; // Reset ptr as substring doesn't match anymore
        }
		i++;
	}
	if(little[j] == '\0') // If the whole substring is found
		return(ptr);
	return(NULL);// If the substring is not found within len
}

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
}
