/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 03:09:25 by user              #+#    #+#             */
/*   Updated: 2024/10/21 11:20:56 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_length(char const *s, char c)
{
	int	len;
	int	word_len;
	int	flag;

	len = 0;
	word_len = 0;
	flag = 0;
	while (s[len] != '\0')
	{
		if (s[len] != c && flag == 0)
		{
			flag++;
			word_len++;
		}
		else if (s[len] == c)
			flag = 0;
		len++;
	}
	return (word_len);
}

static void	append_to_array(char *array, char const *s, int a, int len)
{
	int	i;
	int	start;

	i = 0;
	start = a - len;
	while (i < len)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
}

static char	*prepend(char const *s, int len, int i)
{
	char	*arr;

	arr = (char *)malloc((len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	append_to_array(arr, s, i, len);
	return (arr);
}

static char	**append_array(char **array, char const *s, char c)
{
	int		i;
	int		len;
	int		array_index;

	i = 0;
	len = 0;
	array_index = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			array[array_index] = prepend(s, len, i);
			if (array[array_index] == NULL)
				return (NULL);
			len = 0;
			array_index++;
		}
		else
			len++;
		i++;
	}
	array[array_index] = prepend(s, len, i);
	array[array_index + 1] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = (char **)malloc((get_word_length(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	array = append_array(array, s, c);
	return (array);
}

// #include <stdio.h>

// int	main()
// {
// 	char	*string = "tacorice,potato,fish";
// 	char	c = ',';
// 	char	**ptr = ft_split(string, c);

// 	while (*ptr != NULL)
// 	{
// 		printf("String: %s\n", *ptr);
// 		ptr++;
// 	}

// 	return (0);
// }