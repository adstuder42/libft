/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 21:18:30 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/01 23:00:04 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(char const *s, char *str, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = "";
	if (!s)
		return (NULL);
	while ((s[i] == ' ') || (s[i] == ',') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	while (s[i + j] != '\0')
		j++;
	j--;
	while ((s[i + j] == ' ') || (s[i + j] == ',') || (s[i + j] == '\n') ||
			(s[i + j] == '\t'))
		j--;
	j++;
	if (j < 0)
		j = 0;
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	ft_fill(&s[i], str, j);
	return (str);
}
