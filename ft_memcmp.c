/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 21:09:04 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 19:05:44 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_2;
	unsigned char	*s2_2;

	i = 0;
	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	while (n--)
	{
		if (s1_2[i] != s2_2[i])
			return (s1_2[i] - s2_2[i]);
		i++;
	}
	return (NULL);
}
