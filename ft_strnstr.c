/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:58:02 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/04 08:58:17 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return (((char *)haystack));
	while (haystack[i++] && i < len)
	{
		j = 0;
		while (haystack[i++] == needle[j++])
		{
			if (needle[j] == 0)
				return (((char *)haystack) + (i - j));
		}
	}
	return (0);
}
