/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:33:33 by sbaba             #+#    #+#             */
/*   Updated: 2024/05/06 15:59:13 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = b;
	while (i < len)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	char	*result = ft_memchr(str, 'W', 13);

// 	if (result != NULL)
// 		printf("Found 'W' at position: %ld\n", (result - str));
// 	else
// 		printf("Character 'W' not found.\n");
// }
