/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:32:05 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 01:24:36 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char const *src)
{
	char *dest;

	dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest)
		ft_strcpy(dest, src);
	return (dest);
}
