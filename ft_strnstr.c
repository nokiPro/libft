/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:09:04 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/07 00:51:38 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (len-- && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
			{
				if (needle[j + 1] == '\0')
				{
					if (len < j)
						return (NULL);
					return ((char *)&haystack[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
