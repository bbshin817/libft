/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:59:11 by user              #+#    #+#             */
/*   Updated: 2024/07/06 17:21:39 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int x, int y)
{
	int	result;

	result = 1;
	while (0 < y)
	{
		result *= x;
		y--;
	}
	return (result);
}

char	*return_str(char *result, long nbuf, int len, int flag)
{
	int		i;
	long	buff;
	int		div;
	int		latest;

	i = 0;
	buff = nbuf;
	div = ft_pow(10, (len - 1));
	if (flag < 0)
	{
		result[0] = '-';
		len++;
		i++;
	}
	while (i < len)
	{
		latest = (int)(buff / div);
		buff = buff - latest * div;
		result[i] = '0' + latest;
		div /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbuf;
	long	temp;
	int		flag;
	char	*result;

	nbuf = (long)n;
	len = 0;
	flag = 1;
	if (nbuf < 0)
	{
		flag = -1;
		nbuf = -nbuf;
	}
	temp = nbuf;
	while (0 < temp)
	{
		len++;
		temp /= 10;
	}
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	return_str(result, nbuf, len, flag);
	return (result);
}

// #include <limits.h>
// #include <stdio.h>

// int	main()
// {
// 	int		num = INT_MAX;
// 	char	*result;

// 	result = ft_itoa(num);
// 	if (result != NULL)
// 		printf("Result: %s\n", result);
// 	else
// 		printf("failed!");
// 	free(result);
// 	return (0);
// }