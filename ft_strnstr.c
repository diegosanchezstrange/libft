/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsanchez <dsanchez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:40:03 by dsanchez          #+#    #+#             */
/*   Updated: 2021/09/11 23:11:04 by dsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include "stdio.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	ll;
	size_t	lb;

	i = 0;
	ll = ft_strlen(little);
	lb = ft_strlen(big);
	if (!ll)
		return ((char *)big);
	while (i < len && i + ll <= lb)
	{
		if (big[i] == little[0]
			&& ft_strncmp(((char *)little), ((char *)big) + i, ll) == 0)
			return (((char *)big) + i);
		i++;
	}
	return (NULL);
}
