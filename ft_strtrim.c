/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:57:09 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/23 20:49:54 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	in;
	char			*ret;

	i = 0;
	if (!s1 || !set)
		return (0);
	if (!*s1)
		return (ft_strdup(""));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	in = i;
	while (s1[i])
		i++;
	i--;
	while (s1[i] && ft_strchr(set, s1[i]))
		i--;
	i -= in - 1;
	ret = malloc((i + 1) * sizeof(char));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1 + in, i + 1);
	return (ret);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/
