/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 23:58:33 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/24 19:57:45 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tab;
	unsigned char	*tabcpy;
	int				i;

	tab = (unsigned char *)src;
	tabcpy = (unsigned char *)dst;
	i = 0;
	while (n > 0)
	{
		tabcpy[i] = tab[i];
		n--;
		i++;
	}
	return (tabcpy);
}
