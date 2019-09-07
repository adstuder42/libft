/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 18:40:08 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/01 19:52:18 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tab;

	size++;
	if (!(tab = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (size)
	{
		tab[size] = '\0';
		size--;
	}
	tab[0] = '\0';
	return (tab);
}
