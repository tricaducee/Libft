/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:53:04 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/04 08:53:14 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (i >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = 0;
	return (i);
}
