/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 18:43:09 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/01 21:34:56 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wdsnb(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while ((s[i] != c) && (s[i] != '\0'))
		{
			i++;
			if ((s[i] == c) || (s[i] == '\0'))
				count++;
		}
	}
	return (count);
}

static int	ltrs(char const *s, char c, int i)
{
	int count;

	count = 0;
	while ((s[i] != '\0') && (s[i] != c))
	{
		count++;
		i++;
	}
	return (count);
}

static char	**ft_fill(char const *s, char **tab, char c)
{
	int i;
	int j;
	int line;

	i = 0;
	j = 0;
	line = 0;
	while (tab[line] != 0)
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		while ((s[i] != c) && (s[i] != '\0'))
		{
			tab[line][j] = s[i];
			i++;
			j++;
		}
		tab[line][j] = '\0';
		j = 0;
		line++;
	}
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**tab;
	int		line;

	if (!s)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_wdsnb(s, c) + 1))))
		return (NULL);
	tab[ft_wdsnb(s, c)] = 0;
	i = 0;
	line = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (!(tab[line] = (char *)malloc(sizeof(char) * (ltrs(s, c, i) + 1))))
			return (NULL);
		line++;
		while ((s[i] != '\0') && (s[i] != c))
			i++;
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
	}
	return (ft_fill(s, tab, c));
}
