/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 03:09:25 by user              #+#    #+#             */
/*   Updated: 2024/10/26 09:17:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // 必要なヘッダファイルをインクルード

static int	count_words(const char *str, char delimiter)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimiter && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimiter)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*get_next_word(const char **str, char delimiter)
{
	const char	*start;

	start = *str;
	while (**str && **str != delimiter)
		(*str)++;
	return (ft_substr(start, 0, *str - start));
}

static void	allocate_result(char ***result, int word_count)
{
	*result = (char **)ft_calloc(word_count + 1, sizeof(char *));
}

static int	process_words(const char **s, char c, char **result)
{
	int	i;

	i = 0;
	while (**s)
	{
		if (**s != c)
		{
			result[i] = get_next_word(s, c);
			if (!result[i])
				return (i);
			i++;
		}
		else
			(*s)++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	allocate_result(&result, word_count);
	if (!result)
		return (NULL);
	word_count = process_words(&s, c, result);
	if (word_count < 0)
	{
		while (word_count > 0)
			free(result[--word_count]);
		free(result);
		return (NULL);
	}
	return (result);
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