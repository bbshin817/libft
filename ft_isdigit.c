/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:27:23 by sbaba             #+#    #+#             */
/*   Updated: 2024/11/11 16:52:32 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	array[] = {
		'1', '2', 'a', '&'
	};
	int	i = 0;
	while(i < (sizeof(array) / sizeof(array[0])))
	{
		printf("Input: %c\nft_isdigit: %d\nisdigit: %d\n-----\n", array[i], ft_isdigit(array[i]), isdigit(array[i]));
		i++;
	}
}