#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "interpret.h"
#include "stack.h"

void interpret(const char *source) {
    char op[10], arg[10];
    int a, b;

    int n = sscanf(source, "%s %s", op, arg);

    if (n == 0) return;

    if (strcmp(op, "push") == 0) {
        if (n != 2) {
            printf("Uso correto: push <valor>\n");
            return;
        }
        int value = atoi(arg);
        push(value);
    } else if (strcmp(op, "add") == 0) {
        if (pop(&b) && pop(&a)) {
            push(a + b);
        }
    } else if (strcmp(op, "sub") == 0) {
        if (pop(&b) && pop(&a)) {
            push(a - b);
        }
    } else if (strcmp(op, "mul") == 0) {
        if (pop(&b) && pop(&a)) {
            push(a * b);
        }
    } else if (strcmp(op, "div") == 0) {
        if (pop(&b) && pop(&a)) {
            if (b == 0) {
                printf("Erro: divisão por zero.\n");
                push(a); push(b);
            } else {
                push(a / b);
            }
        }
    } else if (strcmp(op, "print") == 0) {
        if (pop(&a)) {
            printf("%d\n", a);
        }
    } else if (strcmp(op, "exit") == 0) {
        exit(0);
    } else {
        printf("Comando desconhecido: %s\n", op);
    }
}