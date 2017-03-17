/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 00:07:49 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 01:18:48 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char		*pdst;
	char const	*psrc;

	pdst = dst;
	psrc = src;
	while (n > 0)
	{
		*pdst++ = *psrc++;
		n--;
	}
	return (dst);
}
