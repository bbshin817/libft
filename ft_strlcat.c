/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:41:40 by sbaba             #+#    #+#             */
/*   Updated: 2024/04/19 15:42:12 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	i;

	destlen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[] = "Hong";
// 	char	src[] = "Kong";

// 	printf("[Strings]\ndest: \"%s\"\nsrc: \"%s\"\n\n", dest, src);
// 	printf("[Result]\nft_strcat(): %s\n", ft_strcat(dest, src));
// }
