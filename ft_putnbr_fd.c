/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 20:58:01 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/26 19:15:08 by adstuder         ###   ########.fr       */
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

void		ft_putnbr_fd(int n, int fd)
{
	int			j;
	long int	nb;
	int			c;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	j = ft_power(nb);
	while (j > 0)
	{
		c = nb / j + 48;
		write(fd, &c, 1);
		nb = nb % j;
		j = j / 10;
	}
}
