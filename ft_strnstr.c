/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 22:27:51 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/30 21:31:39 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	tmp = len;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while ((len > 0) && (haystack[i] != '\0'))
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (needle[j] != '\0'))
		{
			j++;
			len--;
		}
		if (needle[j] == '\0' && i + j <= tmp)
			return ((char*)&haystack[i]);
		i++;
		len--;
	}
	return (NULL);
}
