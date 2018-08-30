/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:03:34 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/30 14:11:59 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_list
{
	char			**tetr;
	struct s_list	*next;
}					t_list;

typedef struct		s_tetr
{
	t_list			*list;
	char			**matrix;
	int				len;
	int				tetrall;
}					t_tetr;

void				ft_putchar(char c);
void				ft_putstr(char *str);
int					check(char *str);
int					check_tetr(char *str);
char				**malloc_char(char **tab, int len);
void				ft_print_tab(char **tab, int len);
t_list				*ft_create_elem(char *str);
void				ft_insert(char *str);
void				ft_minimum_tetr(t_tetr *e);
void				ft_algorithm(t_tetr *e);
void				ft_freememtab(char ***tab, int len);
void				ft_transzero(t_tetr *e);

#endif
