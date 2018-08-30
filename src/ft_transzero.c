/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:11:07 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 15:20:21 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_trans(t_list **list)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			
		}
	}
}

void	ft_transzero(t_tetr *e)
{
	t_list *ptr;

	ptr = e->list;
	while (ptr)
	{
		ft_trans(&ptr);
		ptr = ptr->next;
	}
}