/*
 * add a pointer to the enchantment
 *
 */

#include"init.h"
#include"namespace.h"


void *enchantment_add(enchantment e, void *ptr) {

	e->size++;
	e->ptrs = realloc(e->ptrs, sizeof(e->ptrs[0]) * e->size);

	if (! e->ptrs) return NULL;
    
	e->ptrs[e->size - 1] = ptr;

	return ptr;

}
