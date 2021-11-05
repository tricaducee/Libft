/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fat_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:59:35 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/04 08:59:47 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*fat_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if ((unsigned char)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	if (c == 0)
		return ((void *)s);
	return (0);
}
