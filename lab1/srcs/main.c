#include "allocator.h"

int main(void)
{
    init_mem(PAGE_NUMBER);
    mem_dump();
    remove(SWAP_FILE);
    testing(400, 10);
    mem_dump();
    return (0);
}