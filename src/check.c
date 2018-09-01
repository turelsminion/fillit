/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:36:31 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/29 15:37:44 by andmiron         ###   ########.fr       */
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
	char	*s;
	int		aux;

	fd = open(str, O_RDONLY);
	if (fd < 2)
		return (0);	
	aux = 0;
	s = (char *)malloc(sizeof(char) * 22);
	while (read(fd, s, 21))
	{
		if (check_col(s) == 0)
		{
			close(fd);
			return (0);
		}
		aux++;
		if (aux == 27)
		{
			close(fd);
			return (0);
		}
	}
	close(fd);
	return (1);
}
