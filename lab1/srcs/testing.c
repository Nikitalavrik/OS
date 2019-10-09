#include "allocator.h"

void            free_reference()
{
    int i;

    i = 0;
    for (i; i < PAGE_NUMBER; i++)
        g_mem[i].reference = 0;
}

void    testing(int num_of_iteration, int system_timer)
{
    int             i;
    t_virtual_page  *page;

    i = 0;
    srand(time(NULL));
    for (i; i < num_of_iteration; i++)
    {
        page = choose_page();
        page->reference = 1;
        page->modify = rand() % 2;
        if (i == system_timer)
        {
            free_reference();
            system_timer += i;
        }
    }
}
