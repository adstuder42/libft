/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:16:20 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/30 19:05:31 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	value;
	unsigned char	*tab;
	unsigned char	*tabcpy;
	int				i;

	value = (unsigned char)c;
	tab = (unsigned char *)src;
	tabcpy = (unsigned char *)dst;
	i = 0;
	while (n > 0)
	{
		tabcpy[i] = tab[i];
		if (tab[i] == value)
			return (&tabcpy[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}
