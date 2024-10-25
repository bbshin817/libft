/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:01:23 by sbaba             #+#    #+#             */
/*   Updated: 2024/10/22 02:52:45 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;
	int	flag;

	i = 0;
	sign = 1;
	num = 0;
	flag = 0;
	while (((9 <= str[i] && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0' && 0 == flag)
	{
		flag = 1;
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9' && str[i] != '\0')
	{
		num = num * 10 + (int)(str[i] - '0');
		i++;
	}
	return (num * sign);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "      --+-++--1234aaaa567";

// 	printf("[Input]\n%s\n\n[Result]\n%d", str, ft_atoi(str));
// }
