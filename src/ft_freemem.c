#include "../includes/fillit.h"

void    ft_freememtab(char ***tab, int len)
{
    int i;

    i = -1;
    while (++i < len)
        free(*tab[i]);
    free(*tab);
}