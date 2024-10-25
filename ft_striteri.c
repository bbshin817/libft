/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:58:53 by user              #+#    #+#             */
/*   Updated: 2024/10/22 02:55:47 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	fnc(unsigned int i, char *str)
// {
// 	printf("%d", str[i]);
// }

// int	main(){
// 	void	(*f)(unsigned int, char*) = fnc;
// 	char *str = "hello, world";

// 	ft_striteri(str, f);
// }