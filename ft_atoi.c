/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:03 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/22 14:06:08 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//pointed to by nptr to int
#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>
int ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

 	// Skipping leading whitespace characters
	while (str[i] == 32)
		i++;

 	// Handling sign
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		sign = -1;
	i++;
	}
	if (str[i] <= '0' && str[i] >= '9')
		return(NULL);

	// Converting digits to integer
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
 	}
	res *= sign;
	return(res);
}

int	main(void)
{
	const char	str[] = "";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return(0);
}
