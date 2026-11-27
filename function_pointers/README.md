# C - Function Pointers

This project explores function pointers in C and their use in selecting and
executing functions dynamically.

## Task 3: Calculator

The calculator performs simple arithmetic operations:

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulo (%)

## Compilation

Compile the program using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc

## Usage

./calc num1 operator num2

## Examples

./calc 97 + 1

./calc 1024 / 10

./calc 1024 '*' 98

./calc 1024 '%' 98

## Error codes

- 98: Incorrect number of arguments
- 99: Invalid operator
- 100: Division or modulo by zero
