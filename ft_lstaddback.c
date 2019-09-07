/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 17:55:07 by adstuder          #+#    #+#             */
/*   Updated: 2018/05/02 18:56:05 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	if (*alst == NULL)
		*alst = new;
	else if ((*alst)->next == NULL)
		(*alst)->next = new;
	else
		ft_lstaddback(&(*alst)->next, new);
}
