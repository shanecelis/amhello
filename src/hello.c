#include <config.h>
#include <stdio.h>

void
hello(void)
{
    puts("Hello World!");
    puts("This is " PACKAGE_STRING ".");
}
