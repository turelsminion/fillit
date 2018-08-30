/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_nod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:43:02 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 14:03:02 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_list	*ft_create_elem(char *str)
{
	t_list	*new;
	int		i;
	int		j;
	int		aux;

	new = (t_list*)malloc(sizeof(t_list));
	new->tetr = malloc_char(new->tetr, 4);
	i = 0;
	j = 0;
	aux = 0;
	while (i < 19)
	{
		if (str[i] == '\n')
		{
			aux = 0;
			j++;
			i++;
		}
		new->tetr[j][aux] = str[i];
		aux++;
		i++;
	}
	new->next = NULL;
	return (new);
}
