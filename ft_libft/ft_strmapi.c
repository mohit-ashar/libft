/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:28:30 by mashar            #+#    #+#             */
/*   Updated: 2019/10/11 16:28:32 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (NULL);
	len = ft_strlen(s);
	if ((result = (char*)malloc(len + 1)) == NULL)
		return (0);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
