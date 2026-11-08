# Infix to Postfix Converter (C++)

A C++ implementation of an **Infix to Postfix Expression Converter** using the Stack data structure.

## Overview

This program converts mathematical expressions from infix notation to postfix notation while considering operator precedence and parentheses.

**Example:**

```text
Infix:   (A+B)*(C-D)
Postfix: AB+CD-*
```

## Concepts Practiced

- Stack operations using the C++ STL `stack`.
- Operator precedence.
- Handling parentheses.
- Infix to postfix conversion.
- String manipulation in C++.

## Supported Operators

| Operator | Operation |
|---|---|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |

## Testing

Tested using a collection of 20 infix expressions covering:

- Basic arithmetic expressions.
- Mixed operator precedence.
- Combinations of multiple operators.

## Technologies

- Language: C++
- Library: Standard Template Library (STL)
- Data Structure: Stack

## Limitations

- Supports single-character operands.
- Does not currently validate malformed expressions.
- Does not support unary operators or exponentiation.

## Learning Outcome

Built as part of my Data Structures learning journey to practice stack-based problem solving and understand how operator precedence and parentheses are handled during expression conversion.
