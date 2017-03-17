/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 02:04:53 by bchin             #+#    #+#             */
/*   Updated: 2017/02/02 14:35:55 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*current;
	t_list	*next;

	if (*alst && del)
	{
		current = *alst;
		next = current->next;
		del(current->content, current->content_size);
		free(current);
		current = NULL;
		*alst = NULL;
	}
}
