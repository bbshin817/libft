/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:42:59 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/06 17:21:39 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t size)
{
	size_t		f;
	size_t		s;

	f = 0;
	s = 0;
	if (*to_find == '\0')
		return (str);
	while (str[f] != '\0' && f < size)
	{
		s = 0;
		while (str[f + s] == to_find[s] && to_find[s] != '\0')
		{
			s++;
		}
		if (to_find[s] == '\0')
			return (&str[f]);
		f++;
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
