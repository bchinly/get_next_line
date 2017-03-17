/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 02:47:29 by bchin             #+#    #+#             */
/*   Updated: 2017/01/19 00:38:10 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*newlst;

	ptr = f(lst);
	newlst = ptr;
	if (lst == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		newlst->next = f(lst);
		if (newlst->next == NULL)
			return (NULL);
		newlst = newlst->next;
	}
	return (ptr);
}
