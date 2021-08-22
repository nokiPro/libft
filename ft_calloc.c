/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 23:27:06 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 19:50:20 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	if (SIZE_MAX / count < size)
	{
		// グローバル変数 エラーナンバー
		errno = ENOMEM;
		return (NULL);
	}
	// malloc(0)は16が返ってくる
	p = malloc(count * size);
	if (!p)
		return (NULL);
	// bzero
	ft_memset(p, 0, count * size);
	return (p);
}
