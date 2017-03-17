/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 05:54:49 by bchin             #+#    #+#             */
/*   Updated: 2017/02/02 14:24:48 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (len - 1 > 0 &&
		(s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	i = -1;
	while ((s[++i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		len--;
	if (len <= 0)
		len = 0;
	str = (char*)malloc(sizeof(char ) * (len + 1));
	if (str == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
