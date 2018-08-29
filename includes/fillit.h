/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:37:55 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/29 16:24:53 by andmiron         ###   ########.fr       */
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

void				ft_putchar(char c);
void				ft_putstr(char *str);
int					check(char *str);
int					check_tetr(char *str);
char				**malloc_char(char **tab, int len);
void				ft_print_tab(char **tab, int len);
t_list				*ft_create_elem(char *str);
t_list				*ft_insert(char *str);

#endif
