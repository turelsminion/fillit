/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turelsminion <turelsminion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:38:43 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 15:52:29 by turelsminio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_insert(char *str)
{
	t_tetr  e;
	t_list *ptr;
	int		fd;
	char	s[22];

	e.list = NULL;
	e.tetrall = 0;
	ptr = e.list;
	fd = open(str, O_RDONLY);
	while (read(fd, s, 21))
	{
		if (e.tetrall == 0)
		{
			e.list = ft_create_elem(s);
            ptr = e.list;
		}
		else
		{
			ptr->next = ft_create_elem(s);
            ptr = ptr->next;
		}
        e.tetrall++;
	}
   // ft_algorithm(&e);
}