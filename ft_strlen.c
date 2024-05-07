/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:49 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 16:49:49 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main(void)
{
	char *str;

	str = "0";
	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
	printf("%ld\n", strlen(str));
	return(0);
}
*/
