/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:57:12 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/03 16:41:42 by jfleming         ###   ########.fr       */
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
	printf("Resultado: %c\n", ft_tolower(c));
	printf("Resultado: %c\n", tolower(c));
	return(0);
}
