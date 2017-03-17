/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 00:33:18 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 00:35:59 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char const	*ptr;

	ptr = NULL;
	if (s[0] == '\0')
	{
		if (c != '\0')
			return ((char *)ptr);
		return ((char *)&s[0]);
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (*s != '\0')
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	return ((char *)ptr);
}
