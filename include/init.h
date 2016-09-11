/*
 * Enchantment
 *
 */

#pragma once

#include<stdlib.h>

// so that people can see if we have been #include'd by the program
#define arcane_enchantment arcane_enchantment

#ifdef enchantment
# define user_wants_enchantment_namespace
#endif
#include"namespace.h"

struct __enchantment {
    // amount of pointers
    size_t size;
    // list of pointers
    void **ptrs;
};

typedef struct __enchantment _enchantment;

typedef _enchantment * enchantment;


// weave a new enchantment
enchantment enchantment_new()
    __attribute__((warn_unused_result));

// add a pointer to the enchantment
int enchantment_add(enchantment e, void *ptr)
    __attribute__((nonnull));

// malloc a new pointer for the enchantment
void *enchantment_alloc(enchantment e, size_t size)
    __attribute__((warn_unused_result, nonnull));

void *enchantment_realloc(enchantment e, void * ptr, size_t size)
    __attribute__((warn_unused_result, nonnull));

// free the enchantment from the constrains of the world
void enchantment_free(enchantment e)
    __attribute__((nonnull));

#ifndef user_wants_enchantment_namespace
# include"namevoid.h"
#endif
