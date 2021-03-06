/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:35:08 by mashar            #+#    #+#             */
/*   Updated: 2019/10/09 13:49:09 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(char *dest, char *str, size_t len)
{
	size_t i;

	i = 0;
	if (dest < str)
	{
		while (i < len)
		{
			dest[i] = str[i];
			i++;
		}
	}
	else if (dest > str)
	{
		while (len)
		{
			dest[len - 1] = str[len - 1];
			len--;
		}
	}
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	char		*str;

	dest = (char *)dst;
	str = (char *)src;
	ft_cpy(dest, str, len);
	return (dst);
}
