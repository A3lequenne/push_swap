# Libft - Custom C Library

This part of the repository contains a personal implementation of a custom C library, `libft`, which provides a variety of utility functions commonly used in C programming. This library aims to replicate standard libc functions, extend their functionality, and provide additional tools for string handling, memory management, linked lists, and more.

## Overview

### Standard Library Functions (Libc)

The library includes re-implementations of many common libc functions to better understand their underlying mechanics and potentially extend their capabilities. These functions cover:

- **Memory Handling**: Functions like `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, and `ft_memcmp` provide tools to manipulate memory regions.
- **String Handling**: Basic string manipulation functions such as `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`, `ft_strdup`, and `ft_substr` are implemented for handling C-style strings.
- **Character Checks**: Functions like `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, and `ft_tolower` are included for character classification and transformation.
- **Numeric Conversion**: Conversions from string to numeric types are provided with functions like `ft_atoi` and `ft_atol`. Additionally, `ft_abs` returns the absolute value of an integer.
- **Memory Allocation**: The `ft_calloc` function is provided for allocating and zeroing memory.

### String Extensions and Handling

In addition to the standard string handling functions, `libft` includes several more advanced utilities:

- **Advanced String Functions**: `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, and `ft_strncmp` extend the capabilities for manipulating and transforming strings, allowing for operations like concatenation, trimming, splitting, and custom mapping.
- **Conversion and Representation**: `ft_itoa` converts integers to strings, and `ft_unitoa_base` converts unsigned integers to a specified base.
- **Output Functions**: Functions like `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd` allow for formatted output to file descriptors, similar to standard `write` operations.

### Linked List Utilities

`libft` also provides a set of linked list utility functions to facilitate the management of singly linked lists:

- **List Creation and Modification**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, and `ft_lstmap` are implemented for list management. They enable operations like creating nodes, adding nodes to the front or back, deleting nodes, and transforming lists.
- **List Iteration and Access**: Functions like `ft_lstiter`, `ft_lstsize`, and `ft_lstlast` provide means to iterate through, measure, and access elements in linked lists.

### Base Conversions

- **Base Conversion**: `ft_atoi_base` and `ft_unitoa_base` offer support for converting numbers to and from arbitrary bases, providing flexibility beyond simple decimal representation.
- **Digit Counting**: `ft_count_digit_base` calculates the number of digits required to represent a number in a given base.

## Usage

To use the functions from `libft`, include the `libft.h` header file and link the compiled `libft.a` static library in your project:

```c
#include "../includes/libft.h"

// Example usage
int main(void) {
    char *str = ft_strdup("Hello, world!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

To compile your code with `libft`, make sure to link it correctly:

```sh
gcc -o my_program main.c -L. -lft
```

Ensure that `libft.a` is available in the linking path when building your project.

## Back to Project Root

- [Return to my_libft Root Directory](..)