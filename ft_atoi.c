/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <adstuder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 19:23:45 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/27 00:06:07 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned char	*s;
	int				i;
	long long		nb;
	long long		sign;

	s = (unsigned char*)str;
	i = 0;
	nb = 0;
	sign = 1;
	while ((s[i] == 32) || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		nb = (nb * 10) + s[i] - 48;
		i++;
	}
	return ((long long)(nb * sign));
}
