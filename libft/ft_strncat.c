/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 20:40:59 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 00:32:21 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	char *p;

	p = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0' && n > 0)
	{
		*s1++ = *s2++;
		n--;
	}
	*s1 = '\0';
	return (p);
}
