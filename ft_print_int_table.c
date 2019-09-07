/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 23:34:38 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/01 23:44:53 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_int_table(int *tab, size_t len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		ft_putstr("index ");
		ft_putnbr(i);
		ft_putstr(" = ");
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
		len--;
	}
}
