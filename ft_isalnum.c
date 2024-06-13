/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:22:47 by sbaba             #+#    #+#             */
/*   Updated: 2024/06/09 22:38:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[a], %d\n", ft_isalnum('a'));
// 	printf("[0], %d\n", ft_isalnum('0'));
// 	printf("[B], %d\n", ft_isalnum('B'));
// 	printf("[+], %d\n", ft_isalnum('+'));
// }