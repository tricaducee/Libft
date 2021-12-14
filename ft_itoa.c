/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:23:57 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/14 23:09:36 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putnbr(char *str, int i, unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (n > 0)
		return (putnbr(str, i + 1, n / 10));
	str[i] = nb % 10 - '0';
	return (0);
}


char *ft_itoa(int n)
{
	char	*str;
	unsigned int		nb;
	int		i;
	int		pn;

	i = 0;
	pn = 1;
	if (n < 0)
		nb = n * -1;
	else
		nb = n;
	while (nb < 10)
	{
		nb /= 10;
		i++;
	}
	if (n < 0)
	{
		pn *= -1;
		i++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (0);

	putnbr(str, i, (unsigned int)n * pn);
	return (ft_strdup((const char *)str));
}
