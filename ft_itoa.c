/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:48 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/29 16:00:58 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int	ft_int_len(int n)
{	//Calcula o tamanho do INT
	int	lenght;

	lenght = 0;
	while(n != 0)
	{
		lenght++;
		n /= 10;
	}
	return(lenght);
}
char	*ft_itoa(int n)
{
	int	i;
	int	sign;
	char	*str;
	int	len;

	i = 0;
	sign = 1;
	if(n >= 2147483647 || n <= -2147483647)
		return(NULL);
	if(n < 0)
	{
		sign *= -1;
		n *= -1;
	}
	// Allocate memory for the string
	// If n is 0, the lenght of the string will be 1
    len = (n == 0) ? 1 : ft_int_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));

	if (!str)
		return NULL; // Memory allocation failed
	str[0] = '\0'; //Inicializar a string
	while(n != 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	//Adding sign if necessary
	if(sign == -1)
		str[i++] = '-';
	//i++;
	str[i] = '\0';
	//inverter a ordem da string
	int	start;
	int	end;

	start = 0;
	end = i - 1;

	//*****FAZER CONDICAO PARA SE O N COMECAR POR ZERO(S)*****

	while(start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return(str);
}

int	main(void)
{
	int	n;

	n = -2147;
	char *result = ft_itoa(n);

	printf("%s\n", result);
	if(result)
		free(result);
	return(0);
}
/*
File "<string>", line 86
    n = 02147;
        ^
SyntaxError: leading zeros in decimal integer literals are not
permitted; use an 0o prefix for octal integers
*/
