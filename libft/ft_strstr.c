/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 00:39:18 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 00:39:30 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *big, char const *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
