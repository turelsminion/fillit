/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:44:49 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/31 12:43:45 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		**malloc_int(int **tab, int lenline, int lencol)
{
	int i;

	tab = (int **)malloc(sizeof(int *) * lenline);
	i = -1;
	while (++i < lenline)
		tab[i] = (int *)malloc(sizeof(int) * lencol);
	return (tab);
}

char	**malloc_char(char **tab, int len)
{
	int	i;

	tab = (char **)malloc(sizeof(char *) * len);
	i = -1;
	while (++i < len)
	{
		tab[i] = (char *)malloc(sizeof(char) * len);
	}
	return (tab);
}
