/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:51:22 by sbaba             #+#    #+#             */
/*   Updated: 2024/04/26 17:32:43 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[A], %d\n", ft_isascii('A'));
// 	printf("[0], %d\n", ft_isascii('0'));
// 	printf("[c], %d\n", ft_isascii('c'));
// 	printf("[あ], %d\n", ft_isascii(0x3042));
// }
