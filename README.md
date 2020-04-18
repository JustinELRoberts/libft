# Libft
---

## Table of contents
* ### [String Manipulation]()
    * [ft_atoi]()
    * [ft_bzero]()
    * [ft_isalnum]()
    * [ft_isalpha]()
    * [ft_isascii]()
    * [ft_isdigit]()
    * [ft_isprint]()
    * [ft_itoa]()
    * [ft_putchar]()
    * [ft_putchar_fd]()
    * [ft_putendl]()
    * [ft_putendl_fd]()
    * [ft_putnbr]()
    * [ft_putnbr_fd]()
    * [ft_putnstr]()
    * [ft_putnstr_fd]()
    * [ft_putstr]()
    * [ft_putstr_fd]()
    * [ft_split]()
    * [ft_strcat]()
    * [ft_strchr]()
    * [ft_strclr]()
    * [ft_strcmp]()
    * [ft_strcpy]()
    * [ft_strdel]()
    * [ft_strdup]()
    * [ft_strequ]()
    * [ft_striter]()
    * [ft_striteri]()
    * [ft_strjoin]()
    * [ft_strlcat]()
    * [ft_strlcpy]()
    * [ft_strlen]()
    * [ft_strmap]()
    * [ft_strmapi]()
    * [ft_strncat]()
    * [ft_strncmp]()
    * [ft_strncpy]()
    * [ft_strnew]()
    * [ft_strnequ]()
    * [ft_strnstr]()
    * [ft_strrchr]()
    * [ft_strstr]()
    * [ft_strtrim]()
    * [ft_substr]()
    * [ft_tolower]()
    * [ft_toupper]()

* ### [Memory Manipulation Functions]()
    * :q:[ft_calloc]()
    * [ft_memalloc]()
    * [ft_memcpy]()
    * [ft_memccpy]()
    * [ft_memchr]()
    * [ft_memcmp]()
    * [ft_memdel]()
    * [ft_memmove]()
    * [ft_memset]()

* ### [Linked Lists]()
    * [ft_lstadd_back]()
    * [ft_lstadd_front]()
    * [ft_lstclear]()
    * [ft_lstdelone]()
    * [ft_lstfind]()
    * [ft_lstins_after]()
    * [ft_lstiter]()
    * [ft_lstlast]()
    * [ft_lstmap]()
    * [ft_lstnew]()
    * [ft_lstsize]()
    
* ### [Matrix Operations]()
    * [matcreate]()
    * [matdestroy]()
    * [matdet]()
    * [matinverse]()
    * [matmult]()
    * [matnorm]()
    * [mattranspose]()

___
---

## String Manipulation

* ### [ft_atoi]()

    `ft_atoi()`

* [ft_bzero]()
* [ft_isalnum]()
* [ft_isalpha]()
* [ft_isascii]()
* [ft_isdigit]()
* [ft_isprint]()
* [ft_itoa]()
* [ft_putchar]()
* [ft_putchar_fd]()
* [ft_putendl]()
* [ft_putendl_fd]()
* [ft_putnbr]()
* [ft_putnbr_fd]()
* [ft_putnstr]()
* [ft_putnstr_fd]()
* [ft_putstr]()
* [ft_putstr_fd]()
* [ft_split]()
* [ft_strcat]()
* [ft_strchr]()
* [ft_strclr]()
* [ft_strcmp]()
* [ft_strcpy]()
* [ft_strdel]()
* [ft_strdup]()
* [ft_strequ]()
* [ft_striter]()
* [ft_striteri]()
* `char *ft_strjoin(const char *str1, const char *str2);`

    * Allocates (with `malloc()`) and returns a new string, which is the result of the concatenation of `s1` and `s2`

    * Parameters:
        * `str1`: The prefix string
        * `str2`: The suffix string


* [ft_strlcat]()
* [ft_strlcpy]()
* [ft_strlen]()
* [ft_strmap]()
* [ft_strmapi]()
* [ft_strncat]()
* [ft_strncmp]()
* [ft_strncpy]()
* [ft_strnew]()
* [ft_strnequ]()
* [ft_strnstr]()
* [ft_strrchr]()
* [ft_strstr]()
* `char *ft_strtrim(const char *str, const char *set);`
    * Allocates (with `malloc()`) and returns a copy of `str` with the characters specified in `set` removed from the beginning and the end of the string.

    * Parameters:
        * `str`: The string to be trimmed
        * `set`: The reference set of characters to trim from `str`


* `char *ft_substr(const char *str, unsigned int start, size_t len);`

    * Allocates (with `malloc()`) and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.

    *  Parameters:
        * `str`: The string from which to create the substring
        * `start`: The start index of the substring in the string ’s’.
        * `len`: The maximum length of the substring


* [ft_tolower]()
* [ft_toupper]()

---

## Memory Manipulation
* [ft_calloc]()
* [ft_memalloc]()
* [ft_memcpy]()
* [ft_memccpy]()
* [ft_memchr]()
* [ft_memcmp]()
* [ft_memdel]()
* [ft_memmove]()
* [ft_memset]()

---

## Linked Lists
* [ft_lstadd_back]()
* [ft_lstadd_front]()
* [ft_lstclear]()
* [ft_lstdelone]()
* [ft_lstfind]()
* [ft_lstins_after]()
* [ft_lstiter]()
* [ft_lstlast]()
* [ft_lstmap]()
* [ft_lstnew]()
* [ft_lstsize]()

---

## Matrix Operations
* [matcreate]()
* [matdestroy]()
* [matdet]()
* [matinverse]()
* [matmult]()
* [matnorm]()
* [mattranspose]()
