/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 21:34:03 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 03:17:59 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 2147483647)
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', fd);
		else if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
	}
	if (n < 0 && n >= -2147483647)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n + 2362232012, fd);
		ft_putchar_fd('8', fd);
	}
}
