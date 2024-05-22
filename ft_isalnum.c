/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:19 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 12:47:57 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;
	ft_isalnum(c);
	printf("Introduza um caracter: ");
	scanf("%c", &c);
	int result;
	result = ft_isalnum(c);
	if (result == 1)
		printf("Caracter alfanumerico\n");
	else
		printf("Caracter nao alfanumerico\n");
	return (0);
}*/
