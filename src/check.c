/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:36:31 by andmiron          #+#    #+#             */
/*   Updated: 2018/09/10 21:10:04 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

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
	while (i != 24)
	{
		if (str[i] == '\n')
			i += 5;
		else
			return (0);
	}
	return (check_sym(str));
}

int			check(char *str)
{
	char	s[20];
	int		t[4];
	char	c;

	t[0] = -1;
	t[1] = 0;
	t[2] = open(str, O_RDONLY);
	if (t[2] < 2)
		return (0);
	while (read(t[2], s, 20) == 20)
	{
		t[1] = read(t[2], &c, 1);
		if (c != '\n' || ++t[0] > 26 || check_col(s) == 0)
			return (0);
		t[3] = -1;
		while (s[++t[3]])
			if (s[t[3]] != '\n')
				s[t[3]] = '.';
	}
	if (t[1] == 1 || ft_strlen(s) != 20)
		return (0);
	return (1);
}
