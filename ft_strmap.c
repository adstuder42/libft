/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:08:21 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/01 20:20:59 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (s == '\0')
		return (NULL);
	if (!(str = ft_strdup(s)))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (f)(s[i]);
		i++;
	}
	return (str);
}
