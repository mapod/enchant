/*
 * realloc a pointer in the enchantment
 *
 */

#include<stdlib.h>

#include"init.h"
#include"namespace.h"


void *enchantment_realloc(enchantment e, void * ptr, size_t size) {

	void * newptr = realloc(ptr, size);

	if (! ptr) return NULL;

	size_t i;
	for (i = 0; i < e->size; i++)
		if (e->ptrs[i] == ptr) break;

	e->ptrs[i] = newptr;
    
	return newptr;

}
