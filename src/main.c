/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:37:00 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/29 16:29:34 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (check(av[1]))
		{
			printf("Zaibisea pahnet pisea!\n");
			ft_insert(av[1]);
		}
		else
			ft_putstr("error\n");
	}
	else
		ft_putstr("error\n");
	return (0);
}
