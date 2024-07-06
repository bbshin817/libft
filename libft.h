/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:25:08 by sbaba             #+#    #+#             */
/*   Updated: 2024/07/06 18:21:30 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const	char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
int		ft_isdigit(int c);
int		ft_isalpha(int c);

#endif