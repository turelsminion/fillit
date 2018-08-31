/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:11:07 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 16:09:27 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void	ft_transall(t_list **list, int di, int dj)
{
	int	i;
	int	j;

	i = -1;
	if (di > 0 || dj > 0)
	{
		while (++i < 4 && (di + i) < 4)
		{
			j = -1;
			while (++j < 4 && (dj + j) < 4)
			{
				(*list)->tetr[i][j] = (*list)->tetr[di + i][dj + j];
				(*list)->tetr[di + i][dj + j] = '.';
			}
		}
	}
}

static void	ft_trans(t_list **list)
{
	int	i;
	int	j;
	int dj;
	int di;

	di = -1;
	dj = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if ((*list)->tetr[i][j] == '#' && di == -1)
			{
				di = i;
				dj = j;
				j = 0;
				i++;
			}
			else if ((*list)->tetr[i][j] == '#' && dj > j)
				dj = j;
		}
	}
	ft_transall(list, di, dj);
}

void		ft_transzero(t_tetr *e)
{
	t_list *ptr;

	ptr = e->list;
	while (ptr)
	{
		ft_trans(&ptr);
		ptr = ptr->next;
	}
}
