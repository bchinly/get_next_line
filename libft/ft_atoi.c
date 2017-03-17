/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 11:46:39 by bchin             #+#    #+#             */
/*   Updated: 2017/01/19 00:46:42 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char const *str)
{
	int			result;
	int			negative;
	int			i;

	i = 0;
	result = 0;
	negative = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		negative = -1;
		i++;
	}
	if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i++] - '0';
	}
	return (result * negative);
}
