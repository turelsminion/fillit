/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:44:49 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 14:02:28 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	**malloc_char(char **tab, int len)
{
	int	i;

	tab = (char**)malloc(sizeof(char*) * len);
	i = -1;
	while (++i < len)
	{
		tab[i] = (char*)malloc(sizeof(char) * len);
	}
	return (tab);
}
