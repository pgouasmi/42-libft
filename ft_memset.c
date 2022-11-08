//
// Created by jimmy on 07/11/22.
//
#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {

	size_t index;
	index = 0;

	while (index <= n)
	{
		((char *) s)[index] = (char) c;
		index++;
	}

	return (s);
}