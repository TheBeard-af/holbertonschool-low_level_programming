# C - Simple Calculator

## Description
A simple calculator written in C. The program allows users to perform basic arithmetic operations through a terminal menu.

## Compilation
Compile using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Execution
Run the calculator using:

./calculator

## Supported Operations
1: Addition (+)
2: Subtraction (-)
3: Multiplication (*)
4: Division (/)
0: Quit

## Numeric Behaviour
The calculator uses integer operands for addition, subtraction and multiplication. Division uses decimal output to support fractional results.

## Known Limitations
- Menu choices must be integers.
- Non-numeric input is not handled.
- Division by zero is prevented.
