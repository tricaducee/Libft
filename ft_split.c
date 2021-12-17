/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:48:33 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/16 22:09:32 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	compt_w(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		j;
	int		k;

	k = 0;
	if (!s)
		return (0);
	strs = malloc((compt_w(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		strs[k++] = ft_substr(s, 0, j);
		s += j;
	}
	strs[k] = NULL;
	return (strs);
}
