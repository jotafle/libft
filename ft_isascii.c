/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:35 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 11:21:02 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	unsigned char	c;
	printf("Introduza um caracter ascii: ");
	scanf("%c", &c);
	unsigned int	result;
	result = ft_isascii(c);
	if(result == 1)
		printf("Caracter da tabela ascii\n");
	else
		printf("Caracter nao ascii\n");
	return(0);
}*/