/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 01:29:25 by bchin             #+#    #+#             */
/*   Updated: 2017/01/18 21:46:56 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;

	cc = c;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == cc)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
