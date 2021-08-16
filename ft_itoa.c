/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:15:34 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/08 22:16:10 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	int_count(long int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
	{
		i++;
		return (i);
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	recursion_func(unsigned int num, char *tmp, size_t len)
{
	if (num >= 10)
		recursion_func(num / 10, tmp, len - 1);
	tmp[len] = '0' + (num % 10);
}

char	*ft_itoa(int a)
{
	unsigned int	num;
	char			*ret;
	char			*tmp;
	size_t			len;

	len = int_count(a);
	ret = malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	tmp = ret;
	if (a < 0)
	{
		num = (unsigned int)(a * -1);
		*tmp++ = '-';
		len--;
	}
	else
		num = (unsigned int)a;
	recursion_func(num, tmp, len - 1);
	tmp[len] = '\0';
	return (ret);
}
