/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:41:40 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/24 18:41:37 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	int		i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	if (0 == size)
		return (destlen);
	while (destlen < size - 1 && src[i] != '\0')
	{
		dest[destlen] = src[i];
		destlen++;
		srclen++;
		i++;
	}
	dest[destlen] = '\0';
	return (destlen + srclen);
}

// #include <stdio.h>
// #include <string.h> 
// int	main(void)
// {
// 	char	dest[] = "Hong";
// 	char	src[] = "Kong";
// 	printf("[Strings]\ndest: \"%s\"\nsrc: \"%s\"\n\n", dest, src);
// 	printf("[Result]\nft_strcat(): %zu\n", ft_strlcat(dest, src, 8));
// 	printf("dest: %s", dest);
// }
