#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
