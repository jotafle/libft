/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:48:24 by jfleming          #+#    #+#             */
/*   Updated: 2024/04/24 09:12:21 by jfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = calloc(n, size);

	if (ptr == NULL)
		return NULL;
	return(ptr);
}
int	main(void)
{
	int	n;
	int	size;

	n = 3;
	size = 5;
	printf("%p\n", ft_calloc(n, size));
	printf("%p\n", calloc(n, size));
	/*
	Since ptr is a local variable in ft_calloc, it's not accessible
	in the main function. You should allocate memory in main and then
	free it after using it.
	*/
	//free(ptr);
	return(0);
}

