/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:04:17 by exam              #+#    #+#             */
/*   Updated: 2017/02/02 14:45:22 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	base_length(int value, int base)
{
	int i;
	int remainder;

	i = 0;
	if (value < 0)
		value = value * -1;
	while (value > 0)
	{
		remainder = value % base;
		value = value / base;
		i++;
	}
	return (i);
}

char		*ft_itoa_base(int value, int base)
{
	int		i;
	int		remainder;
	char	*digitsarray;
	char	*output;

	digitsarray = "0123456789ABCDEF";
	i = base_length(value, base);
	if (value <= 0 && base == 10)
		i = (base_length(value, base) + 1);
	output = (char*)malloc(sizeof(char) * i + 1);
	if (value < 0 && base == 10)
		output[0] = '-';
	if (value == -2147483648 && base == 10)
		return (output = "-2147483648");
	if (value < 0 && value > -2147483648)
		value = (value * -1);
	output[i] = '\0';
	while (i--)
	{
		remainder = value % base;
		value = value / base;
		output[i - 1] = digitsarray[remainder];
	}
	return (output);
}
