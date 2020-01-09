/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:59:49 by mashar            #+#    #+#             */
/*   Updated: 2019/10/12 17:59:52 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*ft_last(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void			ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = 0;
	if (!alst)
		return ;
	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		new->next = 0;
	}
	else
	{
		tmp = ft_last(*alst);
		tmp->next = new;
		new->next = 0;
	}
}
