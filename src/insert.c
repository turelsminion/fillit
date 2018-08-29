/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:38:43 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/29 17:26:56 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_list	*ft_insert(char *str)
{
	t_list *list;
	t_list *ptr;
	int		fd;
	char	s[22];
	int		aux;

	list = NULL;
	aux = 0;
	ptr = list;
	fd = open(str, O_RDONLY);
	while (read(fd, s, 21))
	{
		if (aux == 0)
		{
			list = ft_create_elem(s);
			//ft_print_tab(list->tetr, 4);
			ptr = list;
			ptr = ptr->next;
			aux++;
		}
		else
		{
			ptr = ft_create_elem(s);
			ptr = ptr->next;
		}
	}
	ptr = list;
	while (ptr)
	{
		ft_print_tab(ptr->tetr, 4);
		ft_putchar('\n');
		ptr = ptr->next;
	}
	return (list);
}