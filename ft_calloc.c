/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:03:00 by sbaba             #+#    #+#             */
/*   Updated: 2024/10/30 17:16:42 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;

	if (count <= __SIZE_MAX__ / size)
	{
		ptr = malloc(count * size);
		if (ptr != NULL)
		{
			ft_bzero(ptr, count * size);
			return (ptr);
		}
		else
			return (NULL);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	size_t count = 5;
// 	size_t size = sizeof(int);
// 	int	*result = (int *)ft_calloc(count, size);

// 	if (result != NULL)
// 	{
// 		printf("[Address]\n%p\n", (void *)result);
// 		printf("[Contents]\n");
// 		for (size_t i = 0; i < count; i++)
// 		{
// 			printf("%d", result[i]);
// 		}
// 		printf("\n");
// 		free(result);
// 	}
// }