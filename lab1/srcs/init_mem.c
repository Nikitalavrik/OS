#include "allocator.h"

t_physical_page *init_physical(void)
{
    return (calloc(1, sizeof(t_physical_page)));
}

void    init_mem(int num_pages)
{
    int i;

    i = 0;
    g_mem = calloc(num_pages, sizeof(t_virtual_page));
    for (i; i < num_pages; i++)
    {
        g_mem[i].physizal_page = init_physical();
        g_mem[i].id = i;
    }

}