/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:19:33 by sbaba             #+#    #+#             */
/*   Updated: 2024/04/19 15:44:26 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20];
// 	char	*src = "Hello, World!";

// 	printf("[Before]\ndest: %s\nsrc: %s\n\n", dest, src);
// 	ft_strcpy(dest, src);
// 	printf("[After]\ndest: %s\nsrc: %s\n\n", dest, src);
// }