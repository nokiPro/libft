/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:40:15 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/08 22:16:44 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursion_func(unsigned int num, int fd)
{
	if (num >= 10)
		recursion_func(num / 10, fd);
	ft_putchar_fd('0' + (num % 10), fd);
}

void	ft_putnbr_fd(int a, int fd)
{
	unsigned int	num;

	if (a < 0)
	{
		num = (unsigned int)(a * -1);
		ft_putchar_fd('-', fd);
	}
	else
		num = (unsigned int)a;
	recursion_func(num, fd);
}
