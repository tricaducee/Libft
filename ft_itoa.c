/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:23:57 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/16 22:06:11 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(char *str, int i, unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (n > 9)
		putnbr(str, i - 1, n / 10);
	str[i] = nb % 10 + '0';
}

static int	int_compt(unsigned int n, int pn)
{
	int	i;

	i = 1;
	if (pn < 0)
		i++;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		pn;
	int		i;
	char	*str;

	pn = 1;
	if (n < 0)
		pn *= -1;
	i = int_compt(n * pn, pn);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		putnbr(str, i - 1, n * pn);
	}
	else
		putnbr(str, i - 1, n);
	return (str);
}
