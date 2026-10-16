*This project has been created as part of the 42 curriculum by tsaby.*

# libft

## Description

**libft** is the very first project of the 42 curriculum: a C library that re-implements a part of the standard C library, plus a set of extra functions for strings, memory, output and linked lists.

It is compiled into a static library, `libft.a`, and reused in most of the following C projects ([pipex](https://github.com/sabytheo/pipex), [push_swap](https://github.com/sabytheo/push_swap), [so_long](https://github.com/sabytheo/so_long), [minishell](https://github.com/sabytheo/minishell), [Cube3d](https://github.com/sabytheo/Cube3d)...).

### Part 1 — libc functions

| Category | Functions |
|---|---|
| Characters | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower` |
| Strings | `ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strdup` `ft_atoi` |
| Memory | `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc` |

### Part 2 — additional functions

| Function | Description |
|---|---|
| `ft_substr` | extracts a substring |
| `ft_strjoin` | concatenates two strings into a new one |
| `ft_strtrim` | trims a set of characters from both ends |
| `ft_split` | splits a string on a delimiter into a `NULL`-terminated array |
| `ft_itoa` | converts an integer to a string |
| `ft_strmapi` / `ft_striteri` | apply a function to every character |
| `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` | write to a file descriptor |

### Bonus — linked lists

`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`, working on:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

## Instructions

```bash
make          # builds libft.a (parts 1 and 2)
make bonus    # adds the linked list functions
```

Compiled with `-Wall -Wextra -Werror`. To use it in a project:

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o program
```

## Resources

- `man 3 strlcpy`, `man 3 memmove`, `man 3 calloc`... (the original functions)
- [libft-unit-test](https://github.com/alelievr/libft-unit-test) and [libftTester](https://github.com/Tripouille/libftTester)
