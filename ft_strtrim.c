/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:21:37 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/24 17:52:05 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_trimmed_length(char const *s1, char const *set)
{
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != *set)
			s++;
		i++;
	}
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s;
	char	*str;

	s = get_trimmed_length(s1, set);
	str = (char *)malloc(sizeof(char) * s);
	if (str == NULL)
		return (NULL);
	i = 0;
	s = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != *set)
		{
			str[s] = s1[i];
			s++;
		}
		i++;
	}
	return (str);
}

/*
修正点：
対象文字列は前後のみで置換する
中間文字列へは触れない
*/

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "     The     Taco Rice  ! !   ";
// 	char set[] = " ";

// 	printf("s1: %s\nset: %s\n", s1, set);
// 	printf("Result: %s", ft_strtrim(s1, set));
// }
