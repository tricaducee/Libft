/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:23:57 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/16 01:50:13 by hrolle           ###   ########.fr       */
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

static int	int_compt(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	int	pn;
	int i;
	char	*str;

	pn = 1;
	if (n < 0)
		pn *= -1;
	i = int_compt(n * pn);
	if (n < 0)
	{
		str = ft_calloc(i + 1, sizeof(char));
		if (!str)
			return (0);
		str[0] = '-';
		putnbr(str, i + 1, n * pn);
	} else
	{
		str = ft_calloc(i, sizeof(char));
		if (!str)
			return (0);
		putnbr(str, i, n);
	}
	return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}
