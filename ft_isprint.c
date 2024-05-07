/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:43 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 11:21:38 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if ((0 <= c && c >= 31) || c >= 127)
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c;

	printf("Introduza um valor printavel: ");
	scanf("%c", &c);
	int	result;
	result = ft_isprint(c);
	if (result == 0)
		printf("Valor printavel\n");
	else
		printf("Valor nao printavel\n");
	return(0);
}
*/