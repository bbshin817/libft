/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:31:20 by sbaba             #+#    #+#             */
/*   Updated: 2024/06/13 02:52:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	str[] = {'l', 'q', 'D', '!', '4'};

// 	for(int i=0; i<5; i++){
// 		printf("[input]\n%c\n[output]\n%c\n\n", str[i], ft_toupper(str[i]));
// 	}
// }
