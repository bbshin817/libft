/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:04:51 by user              #+#    #+#             */
/*   Updated: 2024/07/06 17:23:37 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_putchar_fd(char c, int fd)
// {
// 	int		i;
// 	char	*buf;

// 	i = 0;
// 	buf = c;
// 	while (buf[i] != '\0')
// 	{
// 		write(fd, &buf[i], 1);
// 		i++;
// 	}
// }

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main()
// {
// 	char c = 'j';
// 	ft_putchar_fd(c, STDOUT_FILENO);
// }