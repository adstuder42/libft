/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:39:52 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/26 20:57:26 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_under1(unsigned char *tabsrc, unsigned char *tabdst, int i, int len)
{
	while (len > 0)
	{
		tabdst[i] = tabsrc[i];
		i++;
		len--;
	}
}

void	ft_under2(unsigned char *tabsrc, unsigned char *tabdst, int i, int len)
{
	while ((len > 1))
	{
		i++;
		len--;
	}
	while (i >= 0)
	{
		tabdst[i] = tabsrc[i];
		i--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tabsrc;
	unsigned char	*tabdst;
	int				i;

	tabsrc = (unsigned char *)src;
	tabdst = (unsigned char *)dst;
	i = 0;
	if (len == 0)
		return (dst);
	if (tabsrc >= tabdst)
		ft_under1(tabsrc, tabdst, i, len);
	if (tabsrc < tabdst)
		ft_under2(tabsrc, tabdst, i, len);
	return (dst);
}
