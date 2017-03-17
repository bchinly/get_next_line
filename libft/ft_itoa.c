/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 09:11:28 by bchin             #+#    #+#             */
/*   Updated: 2017/01/18 18:23:16 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_min_int(int n)
{
	char			*str;

	n = 0;
	str = (char*)malloc(sizeof(char) * 12);
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static char	*ft_is_negative(int n)
{
	int		i;
	char	*str;

	i = ft_intlength(n);
	str = (char*)malloc(sizeof(char) * ft_intlength(n) + 1);
	if (str == NULL)
		return (NULL);
	n = n * -1;
	str[i] = '\0';
	while (i > 1)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	str[0] = '-';
	return (str);
}

static char	*ft_is_zero(int n)
{
	char	*str;

	n = 0;
	str = (char*)malloc(sizeof(char) * 2);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_is_positive(int n)
{
	char	*str;
	int		i;

	i = ft_intlength(n);
	str = (char*)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (n != 0)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	if (n == '0')
		n = 0;
	if (n == -2147483648)
		return (ft_min_int(n));
	if (n < 0)
		return (ft_is_negative(n));
	if (n == 0)
		return (ft_is_zero(n));
	return (ft_is_positive(n));
}
