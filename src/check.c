/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:36:31 by andmiron          #+#    #+#             */
/*   Updated: 2018/09/10 21:54:47 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#define IT(aux, i, fd, str) ((aux = 0) && (i = 0) && (fd = open(str, O_RDONLY)))

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
	while (i < 20)
	{
		if (str[i] != '\n')
			return (0);
		i += 5;
	}
	return (check_sym(str));
}

int			check(char *str)
{
	char	*s;
	int		i;
	int		fd;
	char	c;
	int		aux;

	aux = 0;
	i = 0;
	s[20] = '\0';
	fd = open(str, O_RDONLY);
	if (fd < 2)
		return (0);
	while (read(fd, &c, 1))
	{
		if (i == 20)
		{
			ft_putstr(s);
			if (check_col(s) == 0 || aux > 26)
				return (0);
			read(fd, &c, 1);
			i = 0;
			aux++;
		}
		else
		{
			s[i] = c;
			i++;
		}
	}
	return (check_col(s));
}
