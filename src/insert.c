/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:38:43 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/31 14:15:34 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_insert(char *str)
{
	t_tetr	e;
	t_list	*ptr;
	int		fd;
	char	s[22];

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
		ptr->c = e.tetrall + 65;
		e.tetrall++;
	}
	//ft_transzero(&e);
	//ft_algorithm(&e);
}
