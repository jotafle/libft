/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:56 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/03 17:04:58 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    const unsigned char *p = (unsigned char *)str;
    unsigned char uc = c;

    while (n > 0)
    {
    if (*p == uc)
        return (void *)p;
    p++;
    n--;
    }
    return NULL;
}

int main(void)
{
	char str[] = {'a','b','c','d','e','g','h','i'};
	printf("%s\n", ft_memchr(str, 'e', 5));
	printf("%s\n", memchr(str, 'e', 5));
	return(0);
}

/*
EXEMPLO:
str = {'a', 'b', 'c', 'd', 'e', 'g', 'h', 'i'}
n = 5

0. Queremos: procurar um 'e' nos primeiros 5 bytes da string str.
1. Supondo que n = 5 (pois queremos apenas procurar nos primeiros
 5 bytes)
2. Iniciamos o loop com n = 5 (ou seja, n-- so vai ser aplicado
 apos avaliacao da condicao do loop, nao imediatamente antes da
  primeira iteracao)
3. Inicia com *p a apontar para o primeiro byte que e o 'a'
4. A condicao cumpre, o loop inicia e verifica se o primeiro byte
 apontado == c (aqui como uc)
5. Se for igual retorna o *p ('a' nesta str) senao incrementa p++
 e vai para o segundo byte ('b')
6. Agora n = 4 e repete tudo
7. Quando n = 0 nao ha mais bytes para testar e, se nao tiver encontrado
 nada antes (o que retornaria o *p), retorna NULL

*/
