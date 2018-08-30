
#include "../includes/fillit.h"

void    ft_create_matrix(t_tetr *e)
{
    int i;
    int j;

    e->matrix = malloc_char(e->matrix, e->len);
    i = -1;
    while (++i < e->len)
    {
        j = -1;
        while (++j < e->len)
            e->matrix[i][j] = '.';
    }
}