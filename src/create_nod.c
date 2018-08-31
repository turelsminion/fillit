/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_nod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:43:02 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/31 14:33:56 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	**ft_create_vecs_final(int **tab, char **str, int *vec)
{
	int i;
	int j;
	int	aux;

	aux = -1;
	i = vec[0] - 1;
	j = vec[1] - 1;
	while (++i < 4)
	{
		while (++j < 4)
		{
			if (str[i][j] == '#')
			{
				tab[++aux][0] = i - vec[0];
				tab[aux][1] = j - vec[1];
			}
		}
		j = -1;
	}
	return (tab);
}

static int	**ft_create_vecs(int **tab, char **str)
{
	int	i;
	int	vec[2];
	int	j;

	i = -1;
	vec[0] = -1;
	vec[1] = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (str[i][j] == '#' && vec[0] == -1)
			{
				vec[0] = i;
				vec[1] = j;
			}
	}
	tab = ft_create_vecs_final(tab, str, vec);
	return (tab);
}

t_list		*ft_create_elem(char *str)
{
	t_list	*new;
	char	**tab;

	new = (t_list*)malloc(sizeof(t_list));
	new->tetr = malloc_int(new->tetr, 4, 2);
	tab = ft_strsplit(str, '\n');
	new->tetr = ft_create_vecs(new->tetr, tab);
	new->next = NULL;
	return (new);
}
