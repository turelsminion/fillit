
#include "../includes/fillit.h"

void    ft_algorithm(t_tetr *e)
{
    ft_minimum_tetr(e);
    ft_create_matrix(e);
    while (ft_backtracing(e))
    {
        ft_freememtab(e->matrix, e->len);
        e->len++;
        e->matrix = malloc_char(e->matrix, e->len);
    }
    ft_print_tab(e->tetrall, e->len);
}