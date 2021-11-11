/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:11:27 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/09 13:34:34 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,  size_t len)
{
	char	*s2;
	unsigned int	i;
	size_t	s2size;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	s2size = ft_strlen(s + start);
	if (s2size >= len)
		s2 = malloc(len + 1 * sizeof(char));
	else
		s2 = malloc(s2size * sizeof(char));
	if (!s2)
		return (0);
	while (s[start + i] && i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
