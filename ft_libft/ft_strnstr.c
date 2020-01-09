/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:36:39 by mashar            #+#    #+#             */
/*   Updated: 2019/10/08 11:44:30 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	i;

	i = 0;
	needle_size = ft_strlen((char *)needle);
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i] && len >= needle_size)
	{
		if (!ft_memcmp(&haystack[i++], needle, needle_size))
			return ((char *)(&haystack[i - 1]));
		len--;
	}
	return (0);
}
