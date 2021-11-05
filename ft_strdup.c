/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 07:58:55 by hrolle            #+#    #+#             */
/*   Updated: 2021/11/05 08:13:54 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;

	p = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!p)
		return (0);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	return (p);
}
