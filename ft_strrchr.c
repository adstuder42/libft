/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:13:32 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/23 23:51:12 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;

	x = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	if (x == '\0')
		return ((char*)&s[i]);
	while (i >= 0)
	{
		i--;
		if (x == s[i])
			return ((char*)&s[i]);
	}
	return (NULL);
}
