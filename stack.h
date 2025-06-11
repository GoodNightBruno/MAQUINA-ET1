#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

void push(int value);
bool pop(int *result);
bool peek(int *result);
bool is_empty();

#endif