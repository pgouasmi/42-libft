//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

void ft_bzero (void *s, size_t n)
{
	size_t index;

	index = 0;
	while (index < n)
	{
		((char *) s)[index] = '\0';
		index++;
	}
}