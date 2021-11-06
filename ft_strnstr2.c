/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:27:06 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/05 21:33:21 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (!*needle)
        return (((char *)haystack));
    while (*haystack && len >= 0)
    {
        while (*haystack == *needle && len >= 0 && *haystack)
        {
            if (*needle == 0)
                return (((char *)haystack) - ft_strlen(needle));
			haystack++;
			needle++;
        }
        haystack++;
    }
    return (0);
}
