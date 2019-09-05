#include "allocator.h"

void    mem_dump(void)
{
    int i;

    i = 0;
    for (i; i < PAGE_NUMBER; i++)
    {
        printf("page = %i phys addr = %p\nR = %i M = %i P = %i\n",
        i, g_mem[i].physizal_page, g_mem[i].reference,
        g_mem[i].modify, g_mem[i].presence);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}