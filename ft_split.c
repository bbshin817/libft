/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:58:56 by user              #+#    #+#             */
/*   Updated: 2024/07/06 16:29:46 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freeUpArray(char *array, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	getCountOfApperDelimiters(char const *s, char c)
{
	int	c;

	c = 0;
	while (*s != '\0')
	{
		if(*s == c)
			c++;
		s++;
	}
	return (c);
}

char	**ft_split(char const *s, char c)
{
	int 	start;
	int		end;
	int		index;
	int		length;
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((getCountOfApperDelimiters(s, c) + 1) * sizeof(char *));
	if(!result)
		return (NULL);
	start = 0;
	end = 0;
	while (s[end])
	{
		if(s[end] == c)
		{
			length = end - start;
			result[index] = malloc(length + 1);
			if(!result[index])
			{
				freeUpArray(result[index], index);
				return (NULL);
			}
			ft_strlcpy(result[index], &s[start], length);
			result[index][length] = '\0';
			index++;
			start = end + 1;
		}
		end++;
	}
}