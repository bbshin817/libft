/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:19:33 by sbaba             #+#    #+#             */
/*   Updated: 2024/05/14 17:15:41 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = 0;
	while(src[strlen] != '\0' && strlen < size - 1)
		strlen++;

	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (strlen);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20];
// 	char	*src = "Hello, World!";

// 	printf("[Before]\ndest: %s\nsrc: %s\n\n", dest, src);
// 	ft_strlcpy(dest, src, 15);
// 	printf("[After]\ndest: %s\nsrc: %s\n\n", dest, src);
// }
