/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 21:09:53 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 01:19:25 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	char		*d;
	char const	*s;
	size_t		length;
	size_t		n;

	d = dst;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	length = d - dst;
	n = size - length;
	if (n == 0)
		return (length + ft_strlen(s));
	while (*s != '\0')
	{
		if (n > 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (length + (s - src));
}
