/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:31:03 by mashar            #+#    #+#             */
/*   Updated: 2019/10/11 16:31:08 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int last_index;
	int start_trim;
	int i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (s1[0] == '\0')
		return (ft_calloc(1, sizeof(char)));
	last_index = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] != '\0' && (ft_strchr(set, s1[i]) != 0))
		i++;
	start_trim = i;
	if (start_trim > last_index)
		return (ft_calloc(1, sizeof(char)));
	while (ft_strchr(set, s1[last_index]))
		last_index--;
	return (ft_substr(s1, start_trim, last_index - start_trim + 1));
}
