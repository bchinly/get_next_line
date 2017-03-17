/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 03:59:49 by bchin             #+#    #+#             */
/*   Updated: 2017/01/31 00:19:50 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(size_t) * size);
	if (str)
	{
		ft_memset(str, 0, size);
	}
	return (str);
}
