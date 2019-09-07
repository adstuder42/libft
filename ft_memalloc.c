/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:20:03 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/28 17:53:57 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *tab;

	if (!(tab = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (size)
	{
		tab[size] = 0;
		size--;
	}
	tab[size] = 0;
	return (tab);
}
