#include "allocator.h"

void    fill_page(int random_num)
{
    g_mem[random_num].modify = 1;
    g_mem[random_num].reference = 1;
}

void    NRU(int random_num)
{
    fill_page(random_num);
    
}