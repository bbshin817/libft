/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:03:00 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/06 17:23:13 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	void			*ptr;
	size_t			i;

	if (0 < size && count <= __SIZE_MAX__ / size)
	{
		ptr = malloc(count * size);
		if (ptr != NULL)
		{
			p = (unsigned char *)ptr;
			i = 0;
			while (i < count * size)
			{
				p[i] = 0;
				i++;
			}
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