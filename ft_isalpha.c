/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:42:26 by sbaba             #+#    #+#             */
/*   Updated: 2024/04/26 15:50:44 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[a], %d\n", ft_isalpha('a'));
// 	printf("[0], %d\n", ft_isalpha('0'));
// 	printf("[C], %d\n", ft_isalpha('C'));
// 	printf("[+], %d\n", ft_isalpha('+'));
// }