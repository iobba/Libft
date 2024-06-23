# Libft.md

This document outlines the requirements for creating a custom library named `libft.a` as part of LIBFT project. The library aims to replicate and extend functionalities found in the C Standard Library (`libc`).

## Overview

Upon completion of my task, I have developed a custom library named `libft.a`, meticulously replicating and enhancing functionalities found in the C Standard Library (`libc`). This library comprises a collection of functions prefixed with `ft_`, designed to closely mirror the behavior of certain libc functions, alongside implementing several utility functions that either complement or offer alternative solutions to those found in libc.

## Requirements

### Mandatory Part

- **Program Name**: `libft.a`
- **Files Submitted**:
  - `Makefile`
  - `libft.h`
  - `ft_*.c` (various function names represented by `*`)

### Makefile

The `Makefile` includes targets for building (`all`), cleaning up object files (`clean`), removing all generated files including the library itself (`fclean`), and rebuilding the library (`re`).

### External Functions

No external libraries were utilized during the development of this project.

### Implementation Details

- **Global Variables**: Carefully avoided to maintain clean and modular code.
- **Helper Functions**: Utilized static functions within files where necessary for efficient code organization.
- **File Placement**: Ensured all files are located at the root of the repository for easy access and maintenance.
- **Unused Files**: No unused files were submitted, adhering to the requirement for a streamlined submission.
- **Compilation Flags**: Compiled all `.c` files with `-Wall`, `-Wextra`, and `-Werror` to enforce strict coding standards.
- **Library Creation**: Leveraged `ar` for library creation, strictly avoiding `libtool` as per the project specifications.
- **Library Location**: Placed `libft.a` at the root of the repository for ease of access and integration.

### Part 1: libc Functions Replication

Implemented a comprehensive set of libc functions with the `ft_` prefix, adhering to their original behavior as described in their man pages, excluding the use of the `restrict` qualifier. This includes functions such as `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `strlen`, `memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`, `toupper`, `tolower`, `strchr`, `strrchr`, `strncmp`, `memchr`, `memcmp`, `strnstr`, `atoi`, along with the implementation of `calloc` and `strdup` utilizing `malloc()`.

### Part 2: Additional Functions

Developed a suite of utility functions, some of which utilize `malloc()`, including `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`.

### Bonus Part

Following the successful completion of the mandatory part, I chose to implement additional functions for working with linked lists. These functions were added to `libft.h` and included in the `libft.a` library through a `make bonus` target.

## Conclusion

This project has been a rewarding exploration of C programming, focusing on memory management, string manipulation, and basic data structures. The development of `libft.a` has honed my skills in creating robust and reusable code components, contributing to a deeper understanding of the C Standard Library and its practical applications.
