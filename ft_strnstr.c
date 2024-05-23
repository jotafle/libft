/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:05:50 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/23 14:28:33 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	size_t	i;
	int		j;

	ptr = NULL;
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((i < len) && big[i] && little[j])
	{
		if (big[i] == little[j])
		{
			if (j <= 0)
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

//  int main(void)
// {
//     const char *big = "lorem ipsum dolor sit amet";
//     const char *little = "";
//     char *ptr;

//     ptr = ft_strnstr(big, little, 1);
// 	printf("%s\n", ptr);
//     return 0;
// }
