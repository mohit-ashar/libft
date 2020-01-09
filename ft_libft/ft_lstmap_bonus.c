/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:01:17 by mashar            #+#    #+#             */
/*   Updated: 2019/10/12 18:01:21 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;

	(void)del;
	new_list = 0;
	if (!lst)
		return (0);
	if (!f)
		return (0);
	if (!del)
		return (0);
	while (lst)
	{
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new_list);
}
