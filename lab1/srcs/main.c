#include "allocator.h"

int main(void)
{
    init_mem(PAGE_NUMBER);
    mem_dump();
    remove(SWAP_FILE);
    testing(400, 100);
    mem_dump();
    return (0);
}