/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:26:23 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/06 17:21:39 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*bs;

	bs = (const unsigned char *)s;
	while (*bs != '\0')
	{
		if (*bs == (unsigned char)c)
			return ((char *)bs);
		++bs;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *str = "Hello, World!";
// 	const char *ptr;

// 	ptr = ft_strchr(str, 'W');
// 	if (ptr != NULL)
// 		printf("Found 'W' at position :%ld", ptr - str);
// 	else
// 		printf("Not found");
// }