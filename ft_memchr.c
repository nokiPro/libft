/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 20:10:27 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 19:04:28 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_2;

	i = 0;
	s_2 = (unsigned char *)s;
	while (n--)
	{
		if (s_2[i] == (unsigned char)c)
			return ((void *)&s_2[i]);
		i++;
	}
	return (NULL);
}
