/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:44:01 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/28 06:20:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*buffer;

	len = ft_strlen(s) + 1;
	buffer = (char *)malloc(len);
	if (buffer == NULL)
		return (NULL);
	ft_memcpy(buffer, s, len);
	return (buffer);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*src = "Hello, World!";
// 	char	*dest;

// 	dest = ft_strdup(src);
// 	printf("Copied Value: %s", dest);
// }
