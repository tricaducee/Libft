/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:48:33 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/02 17:18:19 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char 	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			j++;
		i++;
	}
	strs = malloc((j + 1) * sizeof(char *));
	if (!strs)
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			i++;
			while (s[j] != c)
				j++;
			strs[k++] = ft_substr(s, i, j);
		}
		i++;
	}
	strs[k] = 0;
	return (strs);
}
