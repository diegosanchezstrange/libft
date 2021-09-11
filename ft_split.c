/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsanchez <dsanchez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:40:07 by dsanchez          #+#    #+#             */
/*   Updated: 2021/09/11 18:27:51 by dsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	int	fletter;
	int	i;
	int	count;

	fletter = -1;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (fletter == -1 && s[i] != c)
			fletter = i;
		else if (fletter != -1 && s[i] == c)
		{
			fletter = -1;
			count++;
		}
		i++;
	}
	if (fletter != -1)
		count++;
	return (count);
}

char	*get_word(char const *s, int fletter, int i)
{
	int		k;
	char	*sol;

	k = 0;
	if (!(sol = (char *)malloc(i - fletter + 1)))
		return (NULL);
	while (fletter + k < i)
	{
		sol[k] = s[fletter + k];
		k++;
	}
	sol[k] = 0;
	return (sol);
}

char	**ft_split(char const *s, char c)
{
	char	**sol;
	int		fletter;
	int		i;
	int		j;

	if (!s || !(sol = (char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	fletter = -1;
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (fletter == -1 && s[i] != c)
			fletter = i;
		else if (fletter != -1 && s[i] == c)
		{
			sol[j++] = get_word(s, fletter, i);
			fletter = -1;
		}
	}
	if (fletter != -1)
		sol[j++] = get_word(s, fletter, i);
	sol[j] = NULL;
	return (sol);
}

