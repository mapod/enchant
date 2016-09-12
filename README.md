Arcane Enchantment
==================

*Arcane Enchantment* is a library for allocating and
freeing memory from many pointers at once.

You can think of it like you can enchant a whole heap (getit?) of
objects with a particular enchantment such that a particular spell
will make them dissappear. Unless there's a bug.

## Download/Compile/Install

To compile and install Arcane Enchantment, make sure you have these:
 * [Tup](http://gittup.org/tup/)
 * C compiler

Then run this in your shell:
```sh
tup
./install.sh
```

If you're not the root user, you can install it locally with:
`PREFIX=$HOME ./install.sh`.

## Usage

I'm really bad at explaining things, so I'll just show you:

```c
#include<arc/enchant/init.h>
#include<arc/enchant/namespace.h>


int main () {

    enchantment a = enchantment_new();

    some_type       thing  = enchantment_alloc(a, size);
    some_other_type thing2 = enchantment_alloc(a, size2);
    char * str = enchantment_add(a, strdup("Here's a string!"));

    // stuff here

    thing = enchantment_realloc(a, thing, size3);

    // and here

    enchantment_free(a);

    // all allocs connected to `a' are free'd :)

}
```

compile the code with `cc code.c -larcane-enchantment`

## License

LGPL >=3
