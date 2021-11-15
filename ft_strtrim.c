/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:57:09 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/15 13:49:50 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	in;
	char			*ret;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	in = i - 1;
	while (s1[i])
		i++;
	while (s1[i] && ft_strchr(set, s1[i]))
		i--;
	i -= in - 1;
	ret = malloc((i + 1) * sizeof(char));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1 + in, i + 1);
	return (ret);
}
