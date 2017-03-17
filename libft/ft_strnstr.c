/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 00:38:53 by bchin             #+#    #+#             */
/*   Updated: 2017/01/18 21:28:05 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		k = 0;
		j = 0;
		while (big[i + j] == little[j] && len - k != 0)
		{
			j++;
			k++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}
