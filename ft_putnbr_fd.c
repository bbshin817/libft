/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:59:00 by user              #+#    #+#             */
/*   Updated: 2024/10/26 04:59:27 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (str == NULL)
		return ;
	write(fd, str, ft_strlen(str));
	free(str);
}

// int	main()
// {
// 	ft_putnbr_fd(12345, STDOUT_FILENO);
// }