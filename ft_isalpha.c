/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:32 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 11:20:50 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;
	printf("Introduza um caracter: ");
	scanf("%c", &c);
	int	result;
	result = ft_isalpha(c);
	if(result == 1)
		printf("Caracter alfabetico\n");
	else
		printf("Caracter nao alfabetico\n");
	return(0);
}*/