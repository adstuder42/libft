/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 22:48:19 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/26 19:56:51 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	ret;
	char			*str;

	i = 0;
	ret = (unsigned char)c;
	str = (char *)b;
	while (len > 0)
	{
		str[i] = ret;
		i++;
		len--;
	}
	return (str);
}
