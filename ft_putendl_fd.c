/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:28:41 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/06 00:40:16 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	n;

	if (!s)
		return ;
	i = ft_strlen((const char *)s);
	n = '\n';
	write (fd, s, i);
	write (fd, &n, 1);
}
