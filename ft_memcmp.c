/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:57:26 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/04 09:15:39 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((char *)s1)[i] && ((char *)s2)[i]
		&& i < n && ((char *)s1)[i] == ((char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
