/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 19:20:08 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/24 23:55:34 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while ((str1[i] == str2[i]) && (str1[i] != '\0') && (str2[i] != '\0')
		&& (n > 0))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (str1[i - 1] - str2[i - 1]);
	return (str1[i] - str2[i]);
}
