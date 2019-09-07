/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:25:08 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/01 20:21:16 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s == '\0')
		return (NULL);
	if (!(str = ft_strdup(s)))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}
