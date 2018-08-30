/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freemem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:02:38 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 14:02:50 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_freememtab(char ***tab, int len)
{
	int i;

	i = -1;
	while (++i < len)
		free(*tab[i]);
	free(*tab);
}
