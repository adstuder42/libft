/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 18:56:04 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/01 20:57:37 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		(f)(&s[i]);
		i++;
	}
}