/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 00:11:53 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 19:11:03 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_p;
	const char	*src_p;

	dst_p = dst;
	src_p = src;
	if (dst_p < src_p)
	{
		while (len--)
			*dst_p++ = *src_p++;
	}
	else if (dst_p > src_p)
	{
		while (len-- > 0)
			*(dst_p + len) = *(src_p + len);
	}
	return (dst);
}
