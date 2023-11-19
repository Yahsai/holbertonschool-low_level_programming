#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b) { return a + b; }

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b) { return a - b; }

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b) { return a * b; }

/**
 * op_div - divides two integers
 * @a: dividend
 * @b: divisor
 * Return: quotient of a and b, or error message if b is 0
 */
int op_div(int a, int b) { return b ? a / b : (printf("Error: Division by zero\n"), 0); }

/**
 * op_mod - calculates the modulus of two integers
 * @a: dividend
 * @b: divisor
 * Return: remainder of a divided by b, or error message if b is 0
 */
int op_mod(int a, int b) { return b ? a % b : (printf("Error: Modulo by zero\n"), 0); }

/**
 * get_op_func - gets a pointer to the function corresponding to the given operator
 * @s: string representing the operator
 * Return: pointer to the function corresponding to the operator or NULL if not found
 */
int (*get_op_func(char *s))(int, int) {
    int i;
    int (*ops[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

    for (i = 0; i < 5; ++i)
        if (*s == *("+*/-" + i))
            return ops[i];

    return NULL;
}

/**
 * main - main function
 * Return: 0 if executed successfully
 */
int main() {
    char operator = '+';
    int a = 10, b = 5;
    int (*op)(int, int) = get_op_func(&operator);

    if (op)
        printf("%d %c %d = %d\n", a, operator, b, op(a, b));
    else
        printf("Invalid operator\n");

    return 0;
}

