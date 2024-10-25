/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:21:37 by sbaba             #+#    #+#             */
/*   Updated: 2024/10/26 05:50:30 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	search_by_front(const char *s1, const char *set) {
	size_t	i;
	
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))  // `strchr`で`set`の文字が含まれているかを確認
		i++;
	return (i);
}

static size_t	search_by_back(const char *s1, const char *set) {
	size_t i;
	
	i = ft_strlen(s1);
	while (0 < i && ft_strchr(set, s1[i - 1]))  // `strchr`で`set`の文字が含まれているかを確認
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set) {
    size_t	front;
    size_t	back;
	size_t	len;
	char	*result;
	
	if (s1 == NULL || set == NULL)
		return (NULL);
	front = search_by_front(s1, set);
	back = search_by_back(s1, set);
	if (front >= back)
		len = 0;
	else
		len = back - front;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (char *)(s1 + front), len + 1);
	result[len] = '\0';
	return (result);
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
