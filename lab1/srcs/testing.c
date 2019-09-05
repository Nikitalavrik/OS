#include "allocator.h"

void    testing(int num_of_iteration)
{
    int i;
    int random_num;

    srand(time(NULL));
    i = 0;
    for (i; i < num_of_iteration; i++)
    {
        random_num = rand() % PAGE_NUMBER;
        NRU(random_num);
    }
}