/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:52:39 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/06 17:21:39 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char* 			d;
	const unsigned char*	s;

	if (dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s < d && s + n > d)
	{
		i = n;
		while (0 < i)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[20];
// 	char	src[] = "hello, world!";

// 	printf("[Before]\n");
// 	printf("dst: %s\nsrc: %s\n\n", dst, src);
// 	ft_memmove(dst + 10, src, 13);
// 	printf("[After]\n");
// 	printf("dst: %s\nsrc: %s\n\n", dst, src);
// }
