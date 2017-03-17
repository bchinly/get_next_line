/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:57:05 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 00:30:21 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char const *src, size_t len)
{
	int i;

	i = 0;
	while (len > 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	while (len > 0)
	{
		dest[i] = '\0';
		i++;
		len--;
	}
	return (dest);
}
