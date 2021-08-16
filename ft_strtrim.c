/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:19:29 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/07 00:50:09 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (s1 && ft_strchr(set, *s1))
	{
		if (*s1 == '\0')
			return (ft_strdup(""));
		s1++;
	}
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	s = ft_substr(s1, 0, i + 1);
	return (s);
}
