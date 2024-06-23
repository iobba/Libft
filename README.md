libft.a - Your Own Library of C Functions
Program Name: libft.a
Turn-in Files: Makefile, libft.h, ft_*.c
External Functions: malloc, free, write
Libft Authorized: No
Description: A custom library of essential C functions to serve as a foundational tool for programming tasks.

Table of Contents
Introduction
Technical Considerations
Part 1 - Libc Functions
Part 2 - Additional Functions
Bonus Part - Linked List Functions
Usage
Installation
Contributing
License
Introduction
Libft is a project at [Your Institution Name] aimed at recreating some basic standard library functions, understanding their implementation, and building a foundational library (libft.a) to be used in future projects. The functions replicate behaviors from standard C library functions but are prefixed with ft_.

Technical Considerations
Global Variables: Declaring global variables is forbidden.
Helper Functions: Use static functions for helper functions to limit their scope appropriately.
File Structure: Place all files at the root of your repository.
Compilation Flags: Every .c file must compile with -Wall -Wextra -Werror.
Library Creation: Use the ar command to create your library (libft.a). Do not use libtool.
Part 1 - Libc Functions
This part involves recreating standard C library functions with the ft_ prefix. Functions include strlen, memset, memcpy, etc.

Part 2 - Additional Functions
Implement additional utility functions that extend the functionality beyond standard C library, such as ft_substr, ft_strjoin, ft_split, etc.

Bonus Part - Linked List Functions
The bonus part involves implementing functions to manipulate linked lists using the t_list structure. Functions include ft_lstnew, ft_lstadd_front, ft_lstsize, etc.

Usage
To use libft.a, include libft.h in your C files and compile with -L. -lft.

Example:

c
Copy code
#include "libft.h"

int main() {
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    ft_putstr_fd("Length: ", 1);
    ft_putnbr_fd(len, 1);
    return 0;
}
Installation
Clone the repository and run make to compile libft.a.

sh
Copy code
git clone <repository_url>
cd libft
make
Contributing
Contributions are welcome! Please fork the repository and submit a pull request.

License
This project is licensed under the MIT License - see the LICENSE file for details.

