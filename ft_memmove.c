/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:12 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/18 14:49:08 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    // Se dest e src não se sobrepõem, copia de forma simples de
	//trás para frente
    if (d < s || d >= (s + n)) //a segunda parte faz sentido verifica se o ponteiro de destino esta n bytes para alem do sorce
		{
        while (n--)//pos-decremento, inicia n e vai decrementando
		{
            *d++ = *s++;//vai copiando uma a um a medida que avanca em ambos
        }
    } else
	{ // Se dest e src se sobrepõem, copia de forma reversa
	//para evitar corrupção
        d += n;//movemos o ponteiro d para o final da area de memoria
        s += n;//movemos o ponteiro s para o final da area de memoria
        while (n--)//pos-decremento, inicia n e vai decrementando
		{
            *--d = *--s;//pre-decremento, copia s para d e depois decrementa para copiar o anterior e assim sucessivamente
		}
    }

    return dest;
}
/*
int	main(void)
{
	char src[] = {'e','g','h','i'};
	char dest[] = {'a','b','c','d'};

	printf("%s\n", ft_memmove(dest, src, 4));
	printf("%s\n", memmove(dest, src, 4));
	return(0);
}*/
