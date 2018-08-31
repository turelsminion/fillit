/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:27:26 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/31 20:34:36 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_check_fill(t_list *list, t_tetr *e, int i, int j)
{
	int aux;

	aux = -1;
	while (++aux < 4)
	{
		if (list->tetr[aux][0] + i >= e->len || list->tetr[aux][0] + i < 0)
			return (0);
		if (list->tetr[aux][1] + j >= e->len || list->tetr[aux][1] + j < 0)
			return (0);
		if (e->matrix[list->tetr[aux][0] + i][list->tetr[aux][1] + j] != '.')
			return (0);
	}
	aux = -1;
	while (++aux < 4)
		e->matrix[list->tetr[aux][0] + i][list->tetr[aux][1] + j] = list->c;
	return (1);
}
