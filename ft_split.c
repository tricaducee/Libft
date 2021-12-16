/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:48:33 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/16 01:46:36 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
/*
static void print_list(char **s)
{
	while(*s)
		printf("debug:%s\n",*(s++));
}
*/
char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strs = malloc((compt_w(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		if(!s[i])
			break;
		while (s[i] != c && s[i])
			i++;
		strs[k] = ft_substr(s, j, i - j);
		k++;
	}
	strs[k] = NULL;
	return (strs);
}
/*
int	main()
{
	char *s = "      split       this for   me  ! ";
	char **ss = ft_split(s, ' ');
	int i = 0;

	while (ss[i])
	{
		printf("main:%d:%s\n", i, ss[i]);
		i++;
	}
	return (0);
}*/
