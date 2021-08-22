/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 23:15:43 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 19:56:38 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static long	ret_max_min(int sign)
{
	if (sign == -1)
		return (LONG_MIN);
	return (LONG_MAX);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long		num;

	i = 0;
	sign = 1;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		if ((num * 10 + (str[i] - '0')) / 10 != num)
			return ((int)ret_max_min(sign));
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return ((int)num * sign);
}
