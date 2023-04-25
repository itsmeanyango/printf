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

FILES AND THEIR REAL LIFE IMPLEMENTATIONS:

0. printf.c
1. printf_numbers.c
2. printf_binary.c
3. printf_hex_octal_unsigned.c
4. printf_buffer.c
5. printf_nonprintable.c
6. printf_pointer.c
7. printf_flags.c
8. printf_length_modifiers.c
9. printf_field_width.c
10. printf_precision.c
11. printf_zero_flag.c
12. printf_minus_flag.c
13. printf_reversed.c
14. Printf_rot13.c
Main.h
README.md

REAL LIFE IMPLEMENTATIONS

0. The task is to write a custom printf function that formats and prints output to stdout according to the given format string. The function prototype takes in a format string and a variable number of arguments that match the format specifiers in the format string. The function should return the number of characters printed to stdout. A real-life implementation of this function could be used in a logging library or any program that needs to output formatted messages to the console.

1. This task extends the previous task by adding support for integer format specifiers - 'd' and 'i'. These specifiers represent signed integers, and the function should handle them by converting the integer argument to a string and printing it to stdout. A real-life implementation of this function could be used in a financial application that needs to format and print monetary values or in a scientific application that needs to format and print numerical data.

2. This task adds a custom conversion specifier - 'b' - that converts an unsigned integer argument to binary and prints it to stdout. This functionality could be used in a computer networking application to convert IP addresses or other binary values to a human-readable format.

3. This task adds support for several integer format specifiers - 'u', 'o', 'x', and 'X'. These specifiers represent unsigned integers in different formats (decimal, octal, hexadecimal lowercase, and hexadecimal uppercase, respectively). The function should handle these specifiers by converting the integer argument to a string in the specified format and printing it to stdout. A real-life implementation of this function could be used in a computer engineering or data analysis application that needs to format and print numerical data in various formats.

4. This task requires the function to use a local buffer of 1024 chars to minimize calls to the write system function. This optimization is useful in high-performance applications where the function is called frequently, and minimizing system calls can improve the overall performance of the program.

5. This task adds a custom conversion specifier - 'S' - that prints a string to stdout while converting non-printable characters to their hexadecimal ASCII code values. This functionality could be used in a security application that needs to sanitize and print user input or in a text processing application that needs to print text files while converting non-printable characters to their ASCII code values.

6. The p conversion specifier is used to print the address of a pointer variable in hexadecimal format. A real-life implementation of this could be in debugging or low-level programming, where the programmer needs to inspect the memory addresses of variables and data structures.

7. The +, space, and # flags are used to control the formatting of the output for certain conversion specifiers. For example, the + flag can be used to force the printing of a sign (+ or -) for a signed decimal number, while the space flag can be used to print a space character instead of a sign if the number is positive. The # flag can be used to add a prefix to the output for certain conversions, such as 0x for hexadecimal or 0 for octal. A real-life implementation could be in finance or accounting software where the formatting of numbers is important.

8. The length modifiers l and h are used to indicate the size of the argument passed to the conversion specifier. For example, %ld is used to print a long integer, while %hx is used to print a short integer in hexadecimal format. A real-life implementation could be in scientific or engineering software where precise data types are used to represent physical quantities.

9. The field width is a number that specifies the minimum number of characters to be printed for the corresponding argument. If the value to be printed is shorter than the field width, it is padded with spaces (or zeros if the 0 flag is used) to reach the required width. A real-life implementation could be in printing reports or tables where the alignment of columns is important.

10. The precision is a number that specifies the maximum number of characters to be printed for the corresponding argument. For example, %.2f is used to print a floating-point number with 2 decimal places. A real-life implementation could be in financial or scientific software where precision is important for accurate results.

11. The 0 flag is used to pad the output with leading zeros instead of spaces if the field width is larger than the value to be printed. A real-life implementation could be in formatting of numerical data in software that requires a fixed number of digits for display or for data exchange.

12. The - flag is used to left-justify the output instead of right-justifying it (which is the default behavior). A real-life implementation could be in printing text in software that requires left-aligned text for readability, such as menus or user interfaces.

13. The r custom conversion specifier is used to print the reverse of a string. A real-life implementation could be in software that needs to manipulate text, such as text editors or search engines.

14. The R custom conversion specifier is used to apply the ROT13 cipher to a string (i.e., shift each letter by 13 positions in the alphabet). A real-life implementation could be in software that needs to obscure text, such as online forums or chat rooms where users want to avoid censorship or surveillance.

## Authors

- Michelle Anyango Ojee
- Adams Abdulmaleeek

