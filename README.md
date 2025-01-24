# Libft

<p align="center">
	<img src="img/libftm.png" alt="Libft Badge" width="15%">
</p>

Libft is a custom implementation of standard C library functions, created as part of the 42 school curriculum. This project aims to deepen understanding of C programming by recreating essential functions and adding additional utility functions.
## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
- [Usage](#usage)
- [Installation](#installation)
- [License](#license)

## Introduction

Libft is a foundational project at 42 that requires students to reimplement several standard library functions in C. This project helps in mastering memory allocation, pointer arithmetic, and other core concepts of the C language.

## Functions

Libft includes a variety of functions, such as:

- **Memory management**: `ft_calloc`, `ft_memmove`, `ft_memset`, `ft_memcpy`, etc.
- **String manipulation**: `ft_strlcpy`, `ft_strlcat`, `ft_strlen`, `ft_strncmp`, etc.
- **Base conversions**: `ft_itoa_base`, `ft_atoi_base`, etc.
- **Linked list operations**: `ft_lstnew`, `ft_lstadd`, `ft_lstdelone`, `ft_lstsize` etc.
- **Double linked list operations**: `ft_sclst_size.c`, `ft_sclst_min.c`, `ft_sclst_print.c`, etc. 
- **Utility functions**: `ft_atoi`, `ft_itoa`, `ft_toupper`, `ft_tolower`, etc.
- **Input and Output**: `ft_printf`, `get_next_line`, etc.

## Usage

To use the functions provided by Libft, include the header file in your C program:

```c
#include "libft.h"
```

Compile your program with the Libft library:

```sh
cc -Wall -Wextra -Werror -L. -lft your_program.c -o your_program
```

## Installation

Clone the repository and compile the library:

```sh
git clone https://github.com/UnMugViolet/libft.git
cd libft
make
```

This will generate the `libft.a` library file, which you can link against in your projects.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

