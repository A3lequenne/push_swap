# Personal Implementation of `printf`

This repository contains a personal implementation of the `printf` function in C, which replicates and extends the functionality of the standard C library's `printf`. The code includes support for formatted output and custom handling of various flags, providing more control and precision in formatting.

## Overview

The key components of this implementation include handling various flags and modifiers used in formatted output:

1. **Flag Handling**: The implementation supports various flags such as:
   - `+`: Forces a plus sign to be displayed for positive numbers.
   - `-`: Left-justifies the output within the given field width.
   - `0`: Pads the output with leading zeros instead of spaces.
   - `#`: Alternate form, used with `o`, `x`, `X`, and `f` specifiers to modify the output.
   - Space: Inserts a space before positive numbers if no sign is going to be written.

   These flags are parsed and applied to the arguments accordingly to produce formatted output that matches the desired specifications.

2. **Width and Precision Handling**:
   - The implementation allows specifying the minimum field width and precision for formatted output. Width can be provided as a number or extracted from a variable argument (`*`). Precision determines the number of digits printed for floating-point values or the maximum number of characters for strings.

3. **Length Modifiers**:
   - Length modifiers (`h`, `hh`, `l`, `ll`, `L`) are used to determine the size of the argument. This allows the function to handle different data types such as `short`, `long`, and `long double` appropriately.

4. **Specifier Handling**:
   - The implementation supports standard format specifiers (`d`, `i`, `u`, `x`, `f`, etc.) to handle signed and unsigned integers, floating-point numbers, characters, and strings. Each specifier is processed to format the corresponding argument based on the flags, width, and precision provided.

5. **Custom Floating-Point Handling**:
   - Custom handling for floating-point numbers provides greater precision and control compared to the standard `printf`. This is particularly useful for edge cases like rounding and handling large mantissa values to ensure accurate representation.

6. **Big Integer Operations**: 
   - Used for handling large mantissas in floating-point calculations, the implementation includes functions for shifting and performing arithmetic operations on big integers to maintain precision during floating-point operations.

7. **Custom Print Functions**:
   - `ft_dprintf(int fd, const char *format, ...)` and `ft_printf(const char *format, ...)` are custom implementations of `dprintf` and `printf`, supporting all standard format specifiers along with additional custom formatting options.

## Usage

This implementation is part of the `libft.a` library. To use the `ft_printf` function, include the `libft.h` header and link against the `libft` library:

```c
#include "../includes/libft.h"

// Example usage of the custom printf function
ft_printf("The value is: %f\n", 123.456);
```

The function will automatically handle initialization and computation based on the format specifiers detected in the format string.

## Dependencies

The code relies on:
- `libft.h`: Custom library functions, including memory management and utility functions.
- Standard C libraries like `<stdarg.h>` for handling variable arguments and `<stdint.h>` for integer types.

## Compilation

To compile this code, link with the `libft` library which contains `ft_printf`:

```sh
gcc -o my_program main.c -L. -lft
```

Make sure to include all necessary files and ensure that `libft.a` is available in the linking path.

## Back to Project Root

- [Return to my_libft Root Directory](..)