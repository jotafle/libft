/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:37 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/29 16:21:09 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void f(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, *c);
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
 			s++;
			i++;
		}
	}
}

int	main(void)
{
	char s[] = "ola joao";
	ft_striteri(s, &f);
	return(0);
}
