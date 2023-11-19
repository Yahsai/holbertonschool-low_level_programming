#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - gets a pointer to the function corresponding to the given operator
 * @s: string representing the operator
 * Return: pointer to the function corresponding to the operator or NULL if not found
 */
int (*get_op_func(char *s))(int, int);

/**
 * main - main function
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: 0 if executed successfully, 98 for incorrect number of arguments, 99 for invalid operator
 */
int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char *operator = argv[2];

    if (*operator != '+' && *operator != '-' && *operator != '*' && *operator != '/' && *operator != '%') {
        printf("Error\n");
        return 99;
    }

    int (*op)(int, int) = get_op_func(operator);

    if (op == NULL) {
        printf("Error\n");
        return 99;
    }

    printf("%d\n", op(num1, num2));
    return 0;  
}

