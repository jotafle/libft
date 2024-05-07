/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:03 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/06 11:10:01 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//pointed to by nptr to int
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] <= '0' && str[i] >= '9')
		return (NULL);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
/*
int	main(void)
{
	const char	str[] = "-1234";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return(0);
}*/