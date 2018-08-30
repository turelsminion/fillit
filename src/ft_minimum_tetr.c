
#include "../includes/fillit.h"

void    ft_minimum_tetr(t_tetr *e)
{
    e->len = 0;
    while (e->len * e->len < e->tetrall * 4)
        e->len++;
}