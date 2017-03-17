/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 21:25:59 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 00:56:10 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *str)
{
	int	index;

	index = 0;
	if (str)
	{
		while (str[index] != '\0')
		{
			write(1, &str[index], 1);
			index++;
		}
	}
}