/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 00:12:34 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 00:24:07 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	char			*pdst;
	char const		*psrc;
	char			*ptr;
	unsigned int	i;

	pdst = dst;
	psrc = src;
	ptr = 0;
	i = 0;
	while (i < n && ptr == 0)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == c)
			ptr = &pdst[i + 1];
		i++;
	}
	return (ptr);
}
