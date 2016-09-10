/*
 * weave a new enchantment
 *
 */

#include<stdlib.h>

#include"init.h"
#include"namespace.h"


enchantment enchantment_new() {

	enchantment e = malloc(sizeof(_enchantment));

	if (! e) return NULL;

	e->size = 0;
	e->ptrs = NULL;

	return e;
    
}
