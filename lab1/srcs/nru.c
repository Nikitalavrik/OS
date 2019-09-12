#include "allocator.h"

int             func_1_1(int a, int b)
{
    return (a & b);
}

int             func_1_0(int a, int b)
{
    return (a && !b);
}

int             func_0_1(int a, int b)
{
    return (!a && b);
}

int             func_0_0(int a, int b)
{
    return (!a && !b);
}

t_virtual_page  *check_bits(int func(int, int))
{
    int i;

    i =0;
    for (i; i < PAGE_NUMBER; i++)
    {
        if (func(g_mem[i].modify, g_mem[i].reference))
            return (&g_mem[i]);
    }
    return (NULL);
}

t_virtual_page  *choose_page(void)
{
    t_virtual_page *page;

    page = check_bits(func_0_0);
    page = !page ? check_bits(func_0_1) : page;
    if (!page)
    {
        page = check_bits(func_1_0);
        page = !page ? check_bits(func_1_1) : page;
        save_swap(page);
    }
    page->modify = rand() % 2;
    page->reference = rand() % 2;
    return(page);
}