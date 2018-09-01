/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:03:34 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/31 20:17:49 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_list
{
	int				**tetr;
	char			c;
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
char				**ft_freememtab(char **tab, int len);
void				ft_transzero(t_tetr *e);
void				ft_create_matrix(t_tetr *e);
int					**malloc_int(int **tab, int lenline, int lencol);
char				**ft_strsplit(char const *s, char c);
int					ft_check_fill(t_list *list, t_tetr *e, int i, int j);
int					ft_backtrack(t_list *list, t_tetr *e);
void				ft_remove(t_list *list, t_tetr *e, int i, int j);
void				ft_free_all(t_tetr *e);

#endif
