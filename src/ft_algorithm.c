/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:01:15 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/31 20:25:57 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_algorithm(t_tetr *e)
{
	ft_minimum_tetr(e);
	e->matrix = malloc_char(e->matrix, e->len);
	ft_create_matrix(e);
	while (ft_backtrack(e->list, e))
	{
		ft_print_tab(e->matrix, e->len);
		e->matrix = ft_freememtab(e->matrix, e->len);
		e->len++;
		e->matrix = malloc_char(e->matrix, e->len);
		ft_create_matrix(e);
	}
	ft_print_tab(e->matrix, e->len);
}
