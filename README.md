# Project 0x11. C - printf

In this group project, we were tasked to implement the `printf()` function in the C programming language. The implementation will mimic the behavior of the original `printf()` function from the standard library of C, which can output formatted strings.

The project started on Apr 20, 2023, at 6:00 AM and had to be completed by Apr 26, 2023, at 6:00 AM. A checker was released on Apr 21, 2023, at 6:00 PM to help us evaluate our implementation. An auto-review will also be launched at the deadline.

The project was completed by a team of two people, namely Michelle Anyango Ojee and Adams Abdulmaleeek.

## Concepts

For this project, we were expected to look at these concepts:

- Group Projects
- Pair Programming - How To
- Flowcharts
- Technical Writing

## Requirements

General requirements:

- Allowed editors: vi, vim, emacs
- All files were compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files ended with a new line
- A `README.md` file, at the root of the folder of the project was mandatory
- The code used the Betty style. It was checked using `betty-style.pl` and `betty-doc.pl`
- We were not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all functions were included in a header file called `main.h`
- We did not forget to push our header file
- All header files should be include guarded
- Note that we were not provided with the `_putchar` function for this project

GitHub requirements:

- There was one project repository per group. The other members did not fork or clone the project to ensure only one of the team had the repository in their GitHub account, otherwise, we risked scoring 0%

### Authorized functions and macros

The following functions and macros were authorized for this project:

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

### Compilation

The code was compiled this way:

```sh
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

As a consequence, we were careful not to push any C file containing a main function in the root directory of the project (we could have a test folder containing all our test files, including main functions).

Our main files included the main header file (main.h): `#include main.h`

We might want to look at the gcc flag `-Wno-format` when testing with our `_printf` and the standard `printf()`.

## Usage

To use our implementation of the `printf()` function, the user must include the header file `main.h` and call the function `_printf()`.

```c
#include "main.h"

int main(void)
{
    _printf("Hello, World!\n");
    return (0);
}
```
FILES
README.md
main.h
_printf.c printf_utility.c
printf_write.c
printf_format_specifiers.c
printf_bases.c
