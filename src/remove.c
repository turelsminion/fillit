/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 20:12:43 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/31 20:32:24 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_remove(t_list *list, t_tetr *e, int i, int j)
{
	int aux;

	aux = -1;
	while (++aux < 4)
	{
		printf("|%c - %d - %d|\n", list->c, list->tetr[aux][0] + i, list->tetr[aux][1] + j);
		e->matrix[list->tetr[aux][0] + i][list->tetr[aux][1] + j] = '.';
	}
}