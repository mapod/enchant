#include<arc/c.h>
#include<stdio.h>
#include<arc/enchant/init.h>
#include<arc/enchant/namespace.h>

int main () {
    enchantment a = enchantment_new();
    char * str = enchantment_alloc(a, 4096 * sizeof(char));
    strcpy(str, "foobar");
    puts(str);
    enchantment_free(a);
}
