/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:58:15 by mashar            #+#    #+#             */
/*   Updated: 2019/10/12 17:58:18 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return (0);
	if (list)
	{
		list->content = (void *)malloc(sizeof(void *));
		if (list->content == NULL)
			return (NULL);
		list->content = content;
		list->next = 0;
	}
	return (list);
}
