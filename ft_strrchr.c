/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:52:32 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/08 16:56:29 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s);
	while (s[len_s] != (char)c)
	{
		if (len_s == 0 && s[len_s] != c)
			return (NULL);
		len_s--;
	}
	return ((char *)&s[len_s]);
}
