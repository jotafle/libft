/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:08:56 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/03 10:15:58 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdio.h>
#include<strings.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char *p = (unsigned char *)s; //Casting int to char
	size_t	i;

	i = 0;
	while(i < n)
	{
		p[i] = '0'; //Set each byte to zero;
		i++;
	}
}

int	main(void)
{
	char s[] = {'e','g','h','i','\0'};
	ft_bzero(s, 2);
	printf("%s\n", s);
	//printf("%s\n", bzero(s, 5));
	return (0);
}
