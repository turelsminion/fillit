/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:59:45 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 14:00:19 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_create_matrix(t_tetr *e)
{
	int	i;
	int	j;

	e->matrix = malloc_char(e->matrix, e->len);
	i = -1;
	while (++i < e->len)
	{
		j = -1;
		while (++j < e->len)
			e->matrix[i][j] = '.';
	}
}
