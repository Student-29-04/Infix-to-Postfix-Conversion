 # Infix-to-Postfix-Conversion

## Overview

This project implements the conversion of infix expressions to postfix expressions using a stack in C.
It processes operands, operators, and parentheses while considering operator precedence and associativity to generate the equivalent postfix expression.

## Key Concepts

* Stack data structure
* Operator precedence and associativity
* Modular programming in C

## Project Structure

* `main.c` – Implements the conversion logic
* `functions.h` – Contains function declarations
* `push.c` – Implements the push operation
* `pop.c` – Implements the pop operation
* `precedence.c` – Defines operator precedence
* `Makefile` – Automates compilation

## Sample Output

**Input:** `A+B*C`

**Output:** `ABC*+`

## Build

```bash
make
```

## Execution

```bash
./infix_to_postfix
```

## Conclusion

The project demonstrates stack-based expression conversion and modular software development using C.
