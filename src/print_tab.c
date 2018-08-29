/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:03:58 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/29 16:07:36 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_print_tab(char **tab, int len)
{
	int i;
	int j;

	i = -1;
	while (++i < len)
	{
		j = -1;
		while (++j < len)
		{
			ft_putchar(tab[i][j]);
		}
		ft_putchar('\n');
	}
}