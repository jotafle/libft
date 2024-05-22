/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:37:55 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/07 14:37:57 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, const char delim)
{
	int	count;
	int	x;
	int	i;

	count = 0;
	x = 0;
	i = 0;
	while (str[i] == delim)
		i++;
	while (str[i])
	{
		if (str[i] != delim && x == 0)
		{
			count++;
			x = 1;
		}
		else if (str[i] == delim)
		{
			x = 0;
		}
		i++;
	}
	return (count);
}
