#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 1024

static int stack[MAX_STACK];
static int top = -1;

void push(int value) {
    if (top >= MAX_STACK - 1) {
        printf("Erro: pilha cheia.\n");
        return;
    }
    stack[++top] = value;
}

bool pop(int *result) {
    if (top < 0) {
        printf("Erro: pilha vazia.\n");
        return false;
    }
    *result = stack[top--];
    return true;
}

bool peek(int *result) {
    if (top < 0) return false;
    *result = stack[top];
    return true;
}

bool is_empty() {
    return top < 0;
}