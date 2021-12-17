/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:16:37 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/16 22:07:04 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(unsigned int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n > 9)
		putnbr(n / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	pn;

	pn = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		pn *= -1;
	}
	putnbr(n * pn, fd);
}
