/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:08:00 by sbaba             #+#    #+#             */
/*   Updated: 2024/04/26 17:32:14 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[a], %d\n", ft_isprint('a'));
// 	printf("[0], %d\n", ft_isprint('0'));
// 	printf("[!], %d\n", ft_isprint('!'));
// 	printf("[NULL], %d\n", ft_isprint('\0'));
// }
