#include "allocator.h"

void    save_swap(t_virtual_page *page)
{
    FILE *fptr;

    fptr = fopen(SWAP_FILE, "a");
    if (!fptr)
    {
        printf("No file\n");
        exit(1);
    }
    fprintf(fptr, "SWAP id = %i, phys addr = %p\nR = %i M = %i\n",
    page->id, page->physizal_page, page->reference, page->modify);
}