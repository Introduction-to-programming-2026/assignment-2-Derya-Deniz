# Exercise 05 — Command Line Arguments (argc/argv)

Create a program that:
- If the user runs: `./greet NAME` → prints `hello, NAME`
- Otherwise → prints `hello, world`

## Compile
```bash
clang -std=c11 -Wall -Wextra -Werror greet.c -o greet