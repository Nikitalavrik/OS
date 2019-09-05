#ifndef ALLOCATOR_H
# define ALLOCATOR_H

# include <time.h>
# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <string.h>
# include <stdbool.h>

# define PAGE_NUMBER 10

typedef	struct		s_physical_page
{
	void			*addr;
}					t_physical_page;

typedef struct  	s_virtual_page
{
	t_physical_page	*physizal_page;
	
	bool			reference;
	bool			modify;
	bool			presence;
}               	t_virtual_page;

t_virtual_page		*g_mem;

void    			init_mem(int num_pages);
void    			mem_dump(void);
void    			testing(int num_of_iteration);
void   				NRU(int random_num);

#endif
