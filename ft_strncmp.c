/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:57:17 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/08 16:57:14 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_2;
	const unsigned char	*s2_2;

	s1_2 = (const unsigned char *)s1;
	s2_2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_2[i] == '\0' || s2_2[i] == '\0' || s1_2[i] != s2_2[i])
			return (s1_2[i] - s2_2[i]);
		else
			i++;
	}
	return (0);
}
