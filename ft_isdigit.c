/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:27:23 by sbaba             #+#    #+#             */
/*   Updated: 2024/04/26 15:44:10 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[1], %d\n", ft_isdigit('1'));
// 	printf("[a], %d\n", ft_isdigit('a'));
// 	printf("[0], %d\n", ft_isdigit('0'));
// 	printf("[+], %d\n", ft_isdigit('+'));
// }