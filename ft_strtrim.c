/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsanchez <dsanchez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:39:00 by dsanchez          #+#    #+#             */
/*   Updated: 2021/09/09 19:41:42 by dsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		i;
	char	*res;

	len = -1;
	start = -1;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && len != -1)
	{
		if(start == -1 && ft_strncmp((char *)s1 + i, (char *)set, ft_strlen(set)))
			start = i;
		else if (start != -1 && len == -1 
				&& !ft_strncmp((char *)s1 + i, (char *)set, ft_strlen(set)) 
				&& ft_strlen(s1) - i == ft_strlen(set))
			len = i - start;
		i++;
	}
	i = 0;
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		res[i] = s1[start + i];
		i++;
	}
	return (NULL);
}
