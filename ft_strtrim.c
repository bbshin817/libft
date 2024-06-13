/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:21:37 by sbaba             #+#    #+#             */
/*   Updated: 2024/06/09 23:21:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

size_t	ft_strlen(char *str)
{
	if (*str != '\0')
		return (1 + ft_strlen(++str));
	return (0);
}

static int	getTrimedLength(char const *s1, char const *set)
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

	s = getTrimedLength(s1, set);
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
