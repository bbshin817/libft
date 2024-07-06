/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:40:02 by user              #+#    #+#             */
/*   Updated: 2024/07/06 17:12:11 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	bufflen;
	char	buff;
	char	str;

	i = 0;
	while (s[i] != '\0')
	{
		buff = (char *)malloc(f(i, s[i]) * sizeof(char));
		if (buff == NULL)
			return (NULL);
		buff = f(i, s[i]);
		ft_strlcat(str, buff, ft_strlen(buff));
	}
	return (str);
}

// int	main()
// {
// }