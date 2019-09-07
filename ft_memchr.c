/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 23:01:57 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/26 20:51:54 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	u;
	unsigned char	*str;
	int				i;

	u = (unsigned char)c;
	str = (unsigned char*)s;
	i = 0;
	while (n > 0)
	{
		if (str[i] == u)
			return (&str[i]);
		i++;
		n--;
	}
	return (NULL);
}
