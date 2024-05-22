/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:43 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/09 12:38:11 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
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
