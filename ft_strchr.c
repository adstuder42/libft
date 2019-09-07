/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:03:51 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/23 23:47:54 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	x;

	i = 0;
	x = (char)c;
	if (x == s[i])
		return ((char*)s);
	while (s[i] != '\0')
	{
		i++;
		if (x == s[i])
			return ((char*)&s[i]);
	}
	return (NULL);
}
