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
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strnstr(set, ft_substr(s1, i, 1), ft_strlen(set)) != NULL)
		i++;
	while (len--)
		if (!ft_strnstr(set, ft_substr(s1, len, 1), ft_strlen(set)))
			break ;
	if (!(res = (char *)malloc(len - i + 2)))
		return (NULL);
	j = 0;
	while (j + i <= len)
	{
		res[j] = s1[i + j];
		j++;
	}
	res[j] = 0;
	return (res);
}

int	main()
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";

	char *ret = ft_strtrim(s1, " \n\t");

	printf("res : %s \n", ret);
	if (ret == (void *)0)
		printf("Hola");

	return (0);
}
