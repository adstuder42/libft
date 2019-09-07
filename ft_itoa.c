/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 18:13:10 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/28 17:59:30 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power(int n)
{
	int i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_strfill(int n, int i, char *str)
{
	int tmp;

	tmp = 0;
	while (i >= 0)
	{
		tmp = n / 10;
		n = n % 10;
		str[i] = n + 48;
		n = tmp;
		i--;
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	sign = 1;
	i = ft_power(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		i++;
		sign = -1;
	}
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i--;
	ft_strfill(n, i, str);
	if (sign == -1)
		str[0] = '-';
	return (str);
}
