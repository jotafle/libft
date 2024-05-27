/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:01 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/27 12:11:46 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = 0;
	i = (size_t)ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (unsigned char)c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i--;
	}
	if (s[0] == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

// int	main(void)
// {
// 	const char	*s = "";

// 	printf("%s\n", ft_strrchr(s, '\0'));
// 	printf("%s\n", strrchr(s, '\0'));
// 	return(0);
// }