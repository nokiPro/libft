/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 00:12:15 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/08 22:03:05 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_p;
	const char	*src_p;

	if (!dst && !src)
		return (NULL);
	if (n == 0 || dst == src)
		return (dst);
	dst_p = dst;
	src_p = src;
	while (n--)
		*dst_p++ = *src_p++;
	return (dst);
}
