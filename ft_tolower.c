/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:31:17 by sbaba             #+#    #+#             */
/*   Updated: 2024/06/13 02:52:21 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	str[] = {'A', 'c', 'D', '!', '4'};

// 	for(int i=0; i<5; i++){
// 		printf("[input]\n%c\n[output]\n%c\n\n", str[i], ft_tolower(str[i]));
// 	}
// }
