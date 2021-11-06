/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:51:36 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/06 00:32:47 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (0);
	while (n > 0)
	{
		n--;
		((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}
