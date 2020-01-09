/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:58:57 by mashar            #+#    #+#             */
/*   Updated: 2019/10/12 17:59:02 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *begin)
{
	t_list	*node;
	int		i;

	i = 0;
	node = begin;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
