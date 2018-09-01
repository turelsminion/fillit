/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 19:15:01 by andmiron          #+#    #+#             */
/*   Updated: 2018/09/01 11:57:27 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_backtrack(t_list *list, t_tetr *e)
{
	int	i;
	int	j;

	i = -1;
	while (++i < e->len)
	{
		j = -1;
		while (++j < e->len)
		{
			if (ft_check_fill(list, e, i, j))
			{
				if (list->next == NULL)
					return (1);
				else if (ft_backtrack(list->next, e))
					return (1);
				else
					ft_remove(list, e, i, j);
			}
		}
	}
	return (0);
}
