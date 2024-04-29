/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:12 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/19 14:40:32 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return(c);
}

int	main(void)
{
	char	c;
	printf("Introduza um caracter: ");
	scanf("%c", &c);
	printf("Resultado: %d\n", ft_tolower(c));
	printf("Resultado: %d\n", tolower(c));
	return(0);
}
