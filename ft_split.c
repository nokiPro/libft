/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 22:56:32 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 12:40:36 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_one_element(char const *str, char charset)
{
	size_t	i;
	size_t	count;
	int		sep_flg;

	i = 0;
	count = 0;
	sep_flg = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == charset))
			sep_flg = 1;
		else if (sep_flg == 1)
		{
			sep_flg = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*make_one_element(char const *str, char charset)
{
	size_t	count;
	char	*tmp;

	count = 0;
	while (str[count] != '\0' && (str[count] != charset))
		count++;
	tmp = malloc(sizeof(char) * (count + 1));
	if (!tmp)
		return (NULL);
	count = 0;
	while (str[count] != '\0' && (str[count] != charset))
	{
		tmp[count] = str[count];
		count++;
	}
	tmp[count] = '\0';
	return (tmp);
}

static int	separation_function(char **tmp, char const *str, char charset)
{
	size_t	i;
	size_t	j;
	int		flg;

	i = 0;
	j = 0;
	flg = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == charset))
			flg = 1;
		else if (flg == 1)
		{
			tmp[j] = make_one_element(&str[i], charset);
			if (!tmp[j])
				return (1);
			flg = 0;
			j++;
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *str, char charset)
{
	char		**tmp;
	size_t		size;
	size_t		i;

	if (!str)
		return (NULL);
	i = 0;
	size = count_one_element(str, charset);
	tmp = malloc(sizeof(char *) * (size + 1));
	if (!tmp)
		return (NULL);
	if (separation_function(tmp, str, charset) == 1)
	{
		while (!tmp[i])
			free(tmp[i++]);
		free(tmp);
		return (NULL);
	}
	tmp[size] = NULL;
	return (tmp);
}
