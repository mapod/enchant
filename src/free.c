/*
 * free the enchantment from the constrains of the world
 *
 */

#include"init.h"
#include"namespace.h"


void enchantment_free(enchantment e) {

	for (size_t i = 0; i < e->size; i++)
		free(e->ptrs[i]);
    
	free(e->ptrs);
	free(e);
	
}
