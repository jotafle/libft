/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:38 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 11:21:25 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	printf("Introduza um numero: ");
	scanf("%c", &c);
	int	result;
	result = ft_isdigit(c);
	if (result == 1)
		printf("Introduziu um digito\n");
	else
		printf("Isso nao e um digito!\n");
	return(0);
}*/