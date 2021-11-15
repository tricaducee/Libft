/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:57:09 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/15 01:56:31 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	in;
	char			*ret;

	i = 0;
	while (s1[i] && set[j])
	{
		j = 0;
		while (set[j] && set[j++] != s1[i])
		if (set[j])
			i++;
	}
	in = i;
	while (s1[i])
		i++;
	while (s1[i] && set[j])
	{
		j = 0;
		while (set[j] && set[j++] != s1[i])
		if (set[j])
			i--;
	}
	i -= in;
	ret = malloc((i + 1) * sizeof(char));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1 + in, i + 1);
	return (ret);
}
