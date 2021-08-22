/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:44:42 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 20:13:59 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_c)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	// strlenではメモリ領域を破壊する可能性
	// strnlenだと安全
	dst_len = ft_strnlen(dst, dst_c);
	src_len = ft_strlen(src);
	if (dst_c <= dst_len)
		return (dst_len + src_len);
	// size_tだから足し算の方がいいかも
	while (i + dst_len + 1 < dst_c && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
