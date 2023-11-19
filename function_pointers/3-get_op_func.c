#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - gets a pointer to the function corresponding to the given operator
 * @s: string representing the operator
 * Return: pointer to the function corresponding to the operator or NULL if not found
 */
int (*get_op_func(char *s))(int, int) {
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL) {
        if (*(ops[i].op) == *s) {
            return ops[i].f;
        }
        i++;
    }

    return NULL;
}
