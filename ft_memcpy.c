/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:29:57 by sbaba             #+#    #+#             */
/*   Updated: 2024/05/06 16:18:08 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*b_src;
	unsigned char		*b_dst;

	b_src = (const unsigned char *)src;
	b_dst = (unsigned char *)dst;

	i = 0;
	while (i < len)
	{
		b_dst[i] = b_src[i];
		i++;
	}

	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[20];
// 	char	src[] = "hello, world!";

// 	printf("[Before]\n");
// 	printf("dst: %s\nsrc: %s\n\n", dst, src);
// 	ft_memcpy(dst, src, 1);
// 	printf("[After]\n");
// 	printf("dst: %s\nsrc: %s\n\n", dst, src);
// }
