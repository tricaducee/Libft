/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:53:04 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/31 20:22:54 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	if (i > dstsize)
		return (dstsize + ft_strlen(src));
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = 0;
	while (src[j++])
		i++;
	return (i);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = i;
	while (src[i - j] && i + 1 < dstsize)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < dstsize)
		dst[i] = 0;
	return (j + ft_strlen(src));
}
