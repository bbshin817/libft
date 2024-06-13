/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:01:56 by sbaba             #+#    #+#             */
/*   Updated: 2024/05/06 15:59:13 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (0 < n--)
	{
		*p++ = 0;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	size_t n = 10;
// 	void *result = malloc(n);

// 	ft_bzero(result, n);

// 	printf("[Address]\n%p\n", result);
// 	free(result);
// }