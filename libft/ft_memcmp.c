/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 01:40:08 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 00:25:55 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, const void *s2, size_t n)
{
	unsigned char const	*p1;
	unsigned char const *p2;

	p1 = s1;
	p2 = s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
