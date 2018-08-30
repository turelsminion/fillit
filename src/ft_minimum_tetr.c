/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minimum_tetr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:00:47 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 14:00:59 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_minimum_tetr(t_tetr *e)
{
	e->len = 0;
	while (e->len * e->len < e->tetrall * 4)
		e->len++;
}
