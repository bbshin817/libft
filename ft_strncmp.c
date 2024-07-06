/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:09 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/06 17:21:40 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != '\0')
		return (s1[i]);
	else if (s2[i] != '\0')
		return (-(s2[i]));
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Hello, World!";
// 	char	str2[] = "HellO, World!";
// 	printf("[Input Strings]\nstr1: \"%s\"\nstr2: \"%s\"\n", str1, str2);
// 	printf("[Result]\nft_strcmp(): %d\n", ft_strcmp(str1, str2));
// 	printf("strcmp(): %d\n", strcmp(str1, str2));
// }