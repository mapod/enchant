/*
 * malloc a new pointer for the enchantment
 *
 */

#include"init.h"
#include"namespace.h"


void *enchantment_alloc(enchantment e, size_t size) {

	void *ptr = malloc(size);

	if (! ptr) return NULL;

	enchantment_add(e, ptr);
    
	return ptr;

}
