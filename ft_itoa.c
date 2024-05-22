/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:59:42 by jfleming          #+#    #+#             */
/*   Updated: 2024/05/07 14:30:18 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long int n);
static void	handle_zero(char **result, long int *nbr);

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		len;

	nbr = n;
	len = num_len(n);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	handle_zero(&result, &nbr);
	result[len] = 0;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[len - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		len--;
	}
	return (result);
}

static void	handle_zero(char **result, long int *nbr)
{
	if (*nbr == 0)
	{
		**result = '0';
		*nbr = -*nbr;
	}
}

static int	num_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	int	n;

	n = -1234;
	char *res = ft_itoa(n);

	printf("%s\n", res);
	if (res)
		free(res);
	return (0);
}*/
