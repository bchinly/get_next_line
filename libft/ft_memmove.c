/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 00:39:40 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 01:20:39 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	char		*d;
	char const	*s;

	d = dst;
	s = src;
	if (s == d)
		return (d);
	if (s < d)
	{
		d = &d[len - 1];
		s = &s[len - 1];
		while (len > 0)
		{
			*d-- = *s--;
			len--;
		}
	}
		else while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	return (dst);
}
