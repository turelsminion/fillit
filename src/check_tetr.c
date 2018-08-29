/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:36:43 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/29 16:25:21 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	check_tetr(char *str)
{
	int	i;
	int	count;
	int	neib;

	count = 0;
	neib = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '#')
			count++;
		if (i != 0 && str[i - 1] == '#' && str[i] == '#')
			neib++;
		if (i > 4 && str[i - 5] == '#' && str[i] == '#')
			neib++;
		if (str[i + 1] == '#' && str[i] == '#')
			neib++;
		if (i < 14 && str[i + 5] == '#' && str[i] == '#')
			neib++;
	}
	if ((neib == 8 || neib == 6) && count == 4)
		return (1);
	return (0);
}
