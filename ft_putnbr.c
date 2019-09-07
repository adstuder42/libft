/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:16:26 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/25 22:39:38 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power(long int n)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	while (i > 1)
	{
		j = j * 10;
		i--;
	}
	return (j);
}

void		ft_putnbr(int n)
{
	int			j;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	j = ft_power(nb);
	while (j > 0)
	{
		ft_putchar((nb / j) + 48);
		nb = nb % j;
		j = j / 10;
	}
}
