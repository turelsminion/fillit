/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freemem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:02:38 by andmiron          #+#    #+#             */
/*   Updated: 2018/09/01 11:57:51 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int		**ft_free_tetr(int **tab)
{
	int i;

	i = -1;
	while (++i < 4)
		free(tab[i]);
	free(tab);
	return (tab);
}

char			**ft_freememtab(char **tab, int len)
{
	int i;

	i = -1;
	while (++i < len)
		free(tab[i]);
	free(tab);
	return (tab);
}

static t_list	*ft_free_list(t_list *list)
{
	t_list *ptr;

	ptr = list;
	while (list)
	{
		list->tetr = ft_free_tetr(list->tetr);
		ptr = ptr->next;
		free(list);
		list = ptr;
	}
	return (list);
}

void			ft_free_all(t_tetr *e)
{
	e->matrix = ft_freememtab(e->matrix, e->len);
	e->list = ft_free_list(e->list);
}
