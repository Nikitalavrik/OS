#include "allocator.h"

int main(void)
{
    init_mem(PAGE_NUMBER);
    mem_dump();
    testing(2);
    mem_dump();
    return (0);
}