/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:15 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 12:48:46 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
/*
int	main(void)
{
	char	c;
	printf("Introduza um caracter: ");
	scanf("%c", &c);
	printf("Resultado: %c\n", ft_toupper(c));
	printf("Resultado: %c\n", toupper(c));
	return(0);
}*/