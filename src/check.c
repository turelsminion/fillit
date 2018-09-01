/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:36:31 by andmiron          #+#    #+#             */
/*   Updated: 2018/09/01 12:13:20 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	check_sym(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
	return (check_tetr(str));
}

static int	check_col(char *str)
{
	int i;

	i = 4;
	if (str[20] != '\n')
		return (0);
	while (i != 24)
	{
		if (str[i] != '\n')
			return (0);
		i += 5;
	}
	return (check_sym(str));
}

int			check(char *str)
{
	int		fd;
	char	s[22];
	int		aux;

	fd = open(str, O_RDONLY);
	if (fd < 2)
		return (0);
	aux = 0;
	while (read(fd, s, 21))
	{
		ft_putstr(s);
		aux++;
		if (check_col(s) == 0 && aux == 27)
		{
			close(fd);
			return (0);
		}
	}
	if (aux == 0)
		return (0);
	close(fd);
	return (1);
}
