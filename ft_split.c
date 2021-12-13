/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:48:33 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/13 23:18:14 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	remp(char const *s, char **strs, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		strs[k] = ft_substr(s, i, j);
		k++;
	}
	strs[k] = 0;
}

static	int	compt_w(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c || !s[i + 1])
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = malloc((compt_w(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	remp(s, strs, c);
	return (strs);
}


#include <stdio.h>
int	main()
{
	char *s = " Saloperie de   ft_split  tu m'emmerde  !!!";
	char **ss = ft_split(s, ' ');
	int i = 0;

	while (i < 6)
		printf("%s\n", ss[i++]);

	return (0);
}
