/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:42:59 by sbaba             #+#    #+#             */
/*   Updated: 2024/10/22 02:57:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t size)
{
	size_t	f;
	size_t	s;

	f = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[f] != '\0' && f < size)
	{
		s = 0;
		while ((f + s) < size && str[f + s] == to_find[s] && to_find[s] != '\0')
			s = s + 1;
		if (to_find[s] == '\0')
			return ((char *)&str[f]);
		f = f + 1;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "";
// 	char	to_find[] = "";
// 	char	*result;

// 	printf("[Strings]\nstr: %s\nto_find: %s\n\n", str, to_find);
// 	result = ft_strstr(str, to_find);
// 	// result = strstr(str, to_find);
// 	printf("[Result]\npointer: %s\n", result);
// 	printf("Address: %p\n", result);
// }
