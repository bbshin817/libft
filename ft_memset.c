/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:01:26 by sbaba             #+#    #+#             */
/*   Updated: 2024/06/09 22:05:55 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*bs;

	bs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		bs[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	size_t	len = 13;
// 	ft_memset(str, '\0', len);
// 	printf("After memset: %s", str);
// }
