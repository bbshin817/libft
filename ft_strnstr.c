/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:42:59 by sbaba             #+#    #+#             */
/*   Updated: 2024/04/19 15:43:21 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		f;
	int		s;

	f = 0;
	s = 0;
	if (*to_find == '\0')
		return (str);
	while (str[f] != '\0')
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
	return (0);
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
