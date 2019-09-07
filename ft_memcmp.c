/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 23:13:19 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/26 23:50:13 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tab1;
	unsigned char	*tab2;
	int				i;

	tab1 = (unsigned char*)s1;
	tab2 = (unsigned char*)s2;
	i = 0;
	while (n > 0)
	{
		if (tab1[i] != tab2[i])
			return ((int)(tab1[i] - tab2[i]));
		i++;
		n--;
	}
	return (0);
}
