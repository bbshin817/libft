/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:44:01 by sbaba             #+#    #+#             */
/*   Updated: 2024/05/14 16:47:20 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

size_t	ft_strlen(char *str)
{
	if (*str != '\0')
		return (1 + ft_strlen(++str));
	return (0);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*buffer;

	len = ft_strlen((char *)s);
	if (s[len] != '\0')
		len++;
	buffer = (char *)malloc(len * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		buffer[i] = s[i];
		i++;
	}
	buffer[len] = '\0';
	return (buffer);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*src = "Hello, World!";
// 	char	*dest;

// 	dest = ft_strdup(src);
// 	printf("Copied Value: %s", dest);
// }
