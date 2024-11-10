/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:27:23 by sbaba             #+#    #+#             */
/*   Updated: 2024/11/10 20:31:03 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[1], %d\n", ft_isdigit('1'));
// 	printf("[a], %d\n", ft_isdigit('a'));
// 	printf("[0], %d\n", ft_isdigit('0'));
// 	printf("[+], %d\n", ft_isdigit('+'));
// }