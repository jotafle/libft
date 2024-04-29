/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:19 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/11 11:14:23 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

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
}
