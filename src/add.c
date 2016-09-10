/*
 * add a pointer to the enchantment
 *
 */

#include<stdlib.h>

#include"init.h"
#include"namespace.h"


int enchantment_add(enchantment e, void *ptr) {

	e->size++;
	e->ptrs = realloc(e->ptrs, sizeof(e->ptrs[0]) * e->size);

	if (! e->ptrs) return 1;
    
	e->ptrs[e->size - 1] = ptr;

	return 0;

}
