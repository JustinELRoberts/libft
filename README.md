# Libft

## Table of contents


|                   ﻿[String Manipulation](#String-Manipulation)                  |              [Memory Manipulation](#Memory-Manipulation)             |                     [Linked Lists](#Linked-Lists)                    |                        [Matrices](#Matrices)                        |
|:------------------------------------------------------------------------------:|:--------------------------------------------------------------------:|:--------------------------------------------------------------------:|:-------------------------------------------------------------------:|
|                      [ft_atoi](#int-ft_atoiconst-char-str)                     |         [ft_calloc](#void-ft_callocsize_t-count-size_t-size)         |     [ft_lstadd_back](#void-ft_lstadd_backt_list-alst-t_list-new)     |     [ft_matcreate](#t_matrix-ft_matcreateint-n_rows-int-n_cols)     |
|                   [ft_bzero](#void-ft_bzerovoid-str-size_t-n)                  |              [ft_memalloc](#void-t_memallocsize_t-size)              |    [ft_lstadd_front](#void-ft_lstadd_frontt_list-alst-t_list-new)    |         [ft_matdestroy](#void-ft_matdestroyt_matrix-matrix)         |
|                       [ft_isalnum](#int-ft_isalnumint-c)                       | [ft_memccpy](#void-ft_memccpyvoid-dst-const-void-src-int-c-size_t-n) |       [ft_lstclear](#void-ft_lstcleart_list-alst-void-delvoid-)      |            [ft_matdet](#double-ft_matdett_matrix-matrix)            |
|                       [ft_isalpha](#int-ft_isalphaint-c)                       |     [ft_memcpy](#void-ft_memcpyvoid-dst-const-void-src-size_t-n)     |      [ft_lstdelone](#void-ft_lstdelonet_list-lst-void-delvoid-)      |       [ft_matinverse](#t_matrix-ft_matinverset_matrix-matrix)       |
|                       [ft_isascii](#int-ft_isasciiint-c)                       |       [ft_memchr](#void-ft_memchrconst-void-str-int-c-size_t-n)      |        [ft_lstfind](#t_list-ft_lstfindt_list-lst-void-content)       | [ft_matmult](#t_matrix-ft_matmultt_matrix-matrix1-t_matrix-matrix2) |
|                       [ft_isdigit](#int-ft_isdigitint-c)                       |  [ft_memcmp](#int-ft_memcmpconst-void-str1-const-void-str2-size_t-n) | [ft_lstins_after](#int-ft_lstins_aftert_list-oldlink-t_list-newlink) |           [ft_matnorm](#double-ft_matnormt_matrix-matrix)           |
|                       [ft_isprint](#int-ft_isprintint-c)                       |                  [ft_memdel](#void-ft_memdelvoid-ap)                 |         [ft_lstiter](#void-ft_lstitert_list-lst-void-fvoid-)         |     [ft_mattranspose](#t_matrix-ft_mattransposet_matrix-matrix)     |
|                          [ft_itoa](#char-ft_itoaint-n)                         |   [ft_memmove](#void-ft_memmovevoid-dst-const-void-src-size_t-len)   |              [ft_lstlast](#t_list-ft_lstlastt_list-lst)              |                                                                     |
|                      [ft_putchar](#void-ft_putcharchar-c)                      |          [ft_memset](#void-ft_memsetvoid-b-int-c-size_t-len)         |  [ft_lstmap](#t_list-ft_lstmapt_list-lst-void-fvoid--void-delvoid-)  |                                                                     |
|                [ft_putchar_fd](#void-ft_putchar_fdchar-c-int-fd)               |                                                                      |              [ft_lstnew](#t_list-ft_lstnewvoid-content)              |                                                                     |
|                     [ft_putendl](#void-ft_putendlchar-str)                     |                                                                      |                [ft_lstsize](#int-ft_lstsizet_list-lst)               |                                                                     |
|               [ft_putendl_fd](#void-ft_putendl_fdchar-str-int-fd)              |                                                                      |                                                                      |                                                                     |
|                        [ft_putnbr](#void-ft_putnbrint-n)                       |                                                                      |                                                                      |                                                                     |
|                 [ft_putnbr_fd](#void-ft_putnbr_fdint-n-int-fd)                 |                                                                      |                                                                      |                                                                     |
|                     [ft_putnstr](#void-ft_putnstrchar-str)                     |                                                                      |                                                                      |                                                                     |
|               [ft_putnstr_fd](#void-ft_putnstr_fdchar-str-int-fd)              |                                                                      |                                                                      |                                                                     |
|                      [ft_putstr](#void-ft_putstrchar-str)                      |                                                                      |                                                                      |                                                                     |
|                [ft_putstr_fd](#void-ft_putstr_fdchar-str-int-fd)               |                                                                      |                                                                      |                                                                     |
|                 [ft_split](#char-ft_splitconst-char-str-char-c)                |                                                                      |                                                                      |                                                                     |
|              [ft_strcat](#char-ft_strcatchar-str1-const-char-str2)             |                                                                      |                                                                      |                                                                     |
|                [ft_strchr](#char-ft_strchrconst-char-str-int-c)                |                                                                      |                                                                      |                                                                     |
|                      [ft_strclr](#void-ft_strclrchar-str)                      |                                                                      |                                                                      |                                                                     |
|           [ft_strcmp](#int-ft_strcmpconst-char-str1-const-char-str2)           |                                                                      |                                                                      |                                                                     |
|               [ft_strcpy](#char-ft_strcpychar-dst-const-char-src)              |                                                                      |                                                                      |                                                                     |
|                       [ft_strdel](#void-ft_strdelchar-as)                      |                                                                      |                                                                      |                                                                     |
|                   [ft_strdup](#char-ft_strdupconst-char-str)                   |                                                                      |                                                                      |                                                                     |
|           [ft_strequ](#int-ft_strequchar-const-str1-char-const-str2)           |                                                                      |                                                                      |                                                                     |
|               [ft_striter](#void-ft_striterchar-str-void-fchar-)               |                                                                      |                                                                      |                                                                     |
|        [ft_striteri](#void-ft_striterichar-str-void-funsigned-int-char-)       |                                                                      |                                                                      |                                                                     |
|          [ft_strjoin](#char-ft_strjoinconst-char-str1-const-char-str2)         |                                                                      |                                                                      |                                                                     |
|     [ft_strlcat](#size_t-ft_strlcatchar-dst-const-char-src-size_t-dstsize)     |                                                                      |                                                                      |                                                                     |
|     [ft_strlcpy](#size_t-ft_strlcpychar-dst-const-char-src-size_t-dstsize)     |                                                                      |                                                                      |                                                                     |
|                  [ft_strlen](#size_t-ft_strlenconst-char-str)                  |                                                                      |                                                                      |                                                                     |
|              [ft_strmap](#char-ft_strmapconst-char-str-char-fchar)             |                                                                      |                                                                      |                                                                     |
|      [ft_strmapi](#char-ft_strmapiconst-char-str-char-funsigned-int-char)      |                                                                      |                                                                      |                                                                     |
|        [ft_strncat](#char-ft_strncatchar-str1-const-char-str2-size_t-n)        |                                                                      |                                                                      |                                                                     |
|      [ft_strncmp](#int-ft_strncmpconst-char-str1-const-char-str2-size_t-n)     |                                                                      |                                                                      |                                                                     |
|        [ft_strncpy](#char-ft_strncpychar-dst-const-char-src-size_t-len)        |                                                                      |                                                                      |                                                                     |
|                     [ft_strnew](#char-ft_strnewsize_t-size)                    |                                                                      |                                                                      |                                                                     |
|      [ft_strnequ](#int-ft_strnequchar-const-str1-char-const-str2-size_t-n)     |                                                                      |                                                                      |                                                                     |
| [ft_strnstr](#char-ft_strnstrconst-char-haystack-const-char-needle-size_t-len) |                                                                      |                                                                      |                                                                     |
|               [ft_strrchr](#char-ft_strrchrconst-char-str-int-c)               |                                                                      |                                                                      |                                                                     |
|        [ft_strstr](#char-ft_strstrconst-char-haystack-const-char-needle)       |                                                                      |                                                                      |                                                                     |
|           [ft_strtrim](#char-ft_strtrimconst-char-str-const-char-set)          |                                                                      |                                                                      |                                                                     |
|    [ft_substr](#char-ft_substrconst-char-str-unsigned-int-start-size_t-len)    |                                                                      |                                                                      |                                                                     |
|                       [ft_tolower](#int-ft_tolowerint-c)                       |                                                                      |                                                                      |                                                                     |
|                       [ft_toupper](#int-ft_toupperint-c)                       |                                                                      |                                                                      |                                                                     |

___
---

## String Manipulation

#### `int ft_atoi(const char *str)`

* Converts the initial portion of the string `str` to an `int`. It will trim whitespace from the beginning and end of the string. Additionally, it will stop at the first non-digit character (e.g. `"  \t\n123ab456 \b" would return 123`)

* Parameters:
    * `str`: The string to convert

* Return Value: The 


#### `void ft_bzero(void *str, size_t n)`

* Writes `n` zeroed bytes (i.e. `\0`) to the string `str`.

* Parameters:
    * `str`: The string to write to
    * `n`: The number of `\0`s to write to `str`

* Return Value: None


#### `int ft_isalnum(int c)`

* Tests for any character where `ft_isalpha(c)` or `ft_isdigit(c)` is true.

* Parameters:
    * `c`: An integer which is cast to an unsigned character, then tested

* Return Value: `1` if the above condition is true; `0` otherwise.


#### `int ft_isalpha(int c)`

* Tests for any chracter which `ft_isupper(c)` or `ft_islower(c)` is true.

* Parameters:
    * `c`: An integer which is cast to an unsigned character, then tested

* Return Value: `1` if the above condition is true; `0` otherwise.


#### `int ft_isascii(int c)`

* Tests for any ascii character, which is any char between 0 and 127 inclusive.

* Parameters:
    * `c`: An integer which is cast to an unsigned character, then tested

* Return Value: `1` if the above condition is true; `0` otherwise.


#### `int ft_isdigit(int c)`

* Tests for a digit character, which is any char between `'0'` and `'9'` inclusive.

* Parameters:
    * `c`: An integer which is cast to an unsigned character, then tested

* Return Value: `1` if the above condition is true; `0` otherwise.


#### `int ft_isprint(int c)`

* Tests for any printable character. See `man isprint` for a list of printable characters.

* Parameters:
    * `c`: An integer which is cast to an unsigned character, then tested

* Return Value: `1` if the above condition is true; `0` otherwise.


#### `char *ft_itoa(int n)`

* Allocates (with `malloc()`) and returns a string representing the integer received as an argument.

* Parameters:
    * `n`: The integer to convert

* Return Value: The string representing the integer. `NULL` if the allocation fails.


#### `void ft_putchar(char c)`

* Outputs the character ’c’ to the standard output.

* Parameters:
    * `c`: The character to output

* Return Value: None


#### `void ft_putchar_fd(char c, int fd)`

* Outputs the character ’c’ to the given file descriptor.

* Parameters:
    * `c`: The character to output
    * `fd`: The file descriptor to write to

* Return Value: None


#### `void ft_putendl(char *str)`

* Outputs the string `str` to the standard output, followed by a newline.

* Parameters:
    * `str`: The string to output

* Return Value: None


#### `void ft_putendl_fd(char *str, int fd)`

* Outputs the string `str` to the given file descriptor, followed by a newline.

* Parameters:
    * `str`: The string to output
    * `fd`: The file descriptor to write to

* Return Value: None


#### `void ft_putnbr(int n)`

* Outputs the integer `n` to the standard output.

* Parameters:
    * `n`: The integer to output

* Return Value: None


#### `void ft_putnbr_fd(int n, int fd)`

* Outputs the integer `n` to the given file descriptor.

* Parameters:
    * `n`: The integer to output
    * `fd`: The file descriptor to write to

* Return Value: None


#### `void ft_putnstr(char *str)`

* Outputs n characters from the string `str` to the standard output.

* Parameters:
    * `str`: The string to output

* Return Value: None


#### `void ft_putnstr_fd(char *str, int fd)`

* Outputs n characters from the string `str` to the given file descriptor.

* Parameters:
    * `str`: The string to output
    * `fd`: The file descriptor to write to

* Return Value: None


#### `void ft_putstr(char *str)`

* Outputs the string `str` to the standard output.

* Parameters:
    * `str`: The string to output

* Return Value: None


#### `void ft_putstr_fd(char *str, int fd)`

* Outputs the string `str` to the given file descriptor.

* Parameters:
    * `str`: The string to output
    * `fd`: The file descriptor to write to

* Return Value: None


#### `char **ft_split(const char *str, char c)`

* Allocates (with `malloc()`) and returns an array of strings obtained by splitting `str` using the character `c` as a delimiter. The array must be ended by a `NULL` pointer.

* Parameters:
    * `str`: The string to split
    * `c`: The delimiting character

* Return Value: The array of new strings resulting from the split. `NULL` if the allocation fails.


#### `char *ft_strcat(char str1, const char str2)`

* Allocates (with `malloc()`) and returns a copy of the string resulting from the concatenation of `str1` and `str2`. Both of these strings are assumed to be null-terminating. `str1` must have enough space to hold the result.

* Parameters:
    * `str1`: The prefix string
    * `str2`: The string apppended to `str1`

* Return Value: The string resulting from the concatenation of `str1` and `str2`. `NULL` if allocation fails.


#### `char *ft_strchr(const char *str, int c)`

* Locates the first occurence of `c` (converted to a `char`) in `str`. The terminating null character (`\0`) is considered part of the string.

* Parameters:
    * `str`: The string to search
    * `c`: An integer (converted to a `char`) which is searched for in `str`

* Return Value: A pointer to the located character, or `NULL` if the character does not appear in the string.


#### `void ft_strclr(char *str)`

* Sets every character of the string `str` to `\0`.

* Parameters:
    * `str`: The string to clear

* Return Value: None


#### `int ft_strcmp(const char *str1, const char *str2)`

* Lexicographically compares the null-terminated string `str1` and `str2`.

* Parameters:
    * `str1`: The string compared to `str2`
    * `str2`: The string compared to `str1`

* Return Value: `0` if the strings are identical. If not, finds the first character differing in the two strings (including `\0`) and returns `str1[diff_spot] - str2[diff_spot]`. This comparison is done using unsigned characters.


#### `char *ft_strcpy(char *dst, const char *src)`

* Copies the string `src` to `dst` (including the terminating `\0` character). If these two strings overlap, behavior is undefined (use `ft_memmove` instead).

* Parameters:
    * `dst`: The destination string
    * `src`: The source string

* Return Value: `dst`


#### `void ft_strdel(char **as)`

* `free()`s `*as`, then sets it to `NULL`.

* Parameters:
    * `as`: A pointer to the memoru address to `free()`

* Return Value: None


#### `char *ft_strdup(const char *str)`

* Allocates (with `malloc()`) sufficient memory for a copy of `str`, does the copy, and returns a pointer to it.

* Parameters:
    * `str`: The string we want to duplicate

* Return Value: A pointer to the newly created duplicate string. `NULL` if allocation fails.


#### `int ft_strequ(char const *str1, char const *str2)`

* Lexicographical comparison between `str1` and `str2`.

* Parameters:
    * `str1`: The string to compare to `str2`
    * `str2`: The string to compare to `str1`

* Return Value: `1` if the strings are identical; `0` otherwise.


#### `void ft_striter(char *str, void (*f)(char *))`

* Applies the function `f` to each character of the string `str`. Each character is passed by address to `f` to be modified as necessary.

* Parameters:
    * `str`: The string whose characters are passed to `f`
    * `f`: The function which acts on each character in `str`

* Return Value: None


#### `void ft_striteri(char *str, void (*f)(unsigned int, char *))`

* Applies the function `f` to each character of the string `str`. Each character's index is passed to `f` as well as `str` to be modified as necessary.

* Parameters:
    * `str`: The string whose characters are passed to `f`
    * `f`: The function which acts on each character in `str`

* Return Value: None


#### `char *ft_strjoin(const char *str1, const char *str2)`

* Allocates (with `malloc()`) and returns a new string, which is the result of the concatenation of `s1` and `s2`

* Parameters:
    * `str1`: The prefix string
    * `str2`: The suffix string

* Return Value: The new string. `NULL` if the allocation fails.


#### `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)`

* Appends the string `src` to the end of `dst`. It will append at most `dstsize - ft_strlen(dst) - 1` characters. It will then NULL-terminate, unless `dstsize` is zero or the original `dst` was longer than `dstsize` (this should not happen as it means either `dstsize` is incorrect or `dst` is not a proper string). If `src` and `dst` overlap, behavior is undefined.

* Parameters:
    * `dst`: The destination string
    * `src`: The string to append to `dst`
    * `dstsize`: (Ideally) the size of the destination string

* Return Value: The total length of the string it tried to create.


#### `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)`

* Copies up to `dstsize - 1` characters from the string `src` to `dst`, NULL-terminating the result if `dstsize` is not zero. If `src` and `dst` overlap, behavior is undefined.

* Parameters:
    * `dst`: The destination string
    * `src`: The string to append to `dst`
    * `dstsize`: (Ideally) the size of the destination string

* Return Value: The total length of the string it tried to create.


#### `size_t ft_strlen(const char *str)`

* Computes the length of the NULL-terminated string `str` (not including the terminating character).

* Parameters:
    * `str`: The string whose length we want to compute

* Return Value: The number of characters in `str` (up to and not including the terminating character, `\0`)


#### `char *ft_strmap(const char *str, char (*f)(char))`

* Applies the function `f` to each character of the string `str` to create a new string (with `malloc()`) resulting from successive applications of `f`. Each character is passed to `f` to be modified as necessary.

* Parameters:
    * `str`: The string on which to iterate
    * `f`: The function to apply to each character

* Return Value: The string created from the successive applications of `f`. `NULL` if the allocation fails.


#### `char *ft_strmapi(const char *str, char (*f)(unsigned int, char))`

* Applies the function `f` to each character of the string `str` to create a new string (with `malloc()`) resulting from successive applications of `f`. Each character and its index is passed to `f` to be modified as necessary.

* Parameters:
    * `str`: The string on which to iterate
    * `f`: The function to apply to each character

* Return Value: The string created from the successive applications of `f`. `NULL` if the allocation fails.


#### `char *ft_strncat(char *str1, const char *str2, size_t n)`

* Appends a `n` characters from the NULL-terminated string `str2` to the end of the NULL-terminated string `str1`, then adds a terminating `\0`. `str1` must have sufficient space to hold the result.

* Parameters:
    * `str1`: The string we are appending to
    * `str2`: The string we are concatenating
    * `n`: The number of characters to append

* Return Value: A pointer to `str1`


#### `int ft_strncmp(const char *str1, const char *str2, size_t n)`

* Lexicographically compares the first `n` characters of the NULL-terminated strings `str1` and `str2`.

* Parameters:
    * `str1`: The string compared to `str2`
    * `str2`: The string compared to `str1`
    * `n`n: The number of characters to compare

* Return Value: `0` if the first `n` characters are identical. If not, finds the first character differing in the two strings (including `\0`) and returns `str1[diff_spot] - str2[diff_spot]`. This comparison is done using unsigned characters.


#### `char *ft_strncpy(char *dst, const char *src, size_t len)`

* Copies at most `len` characters from `src` to `dst`. If `src` is less then `len` characters long, the remainder of `dst` is filled with `\0` characters. Otherwise `dst` is **not** terminated. These two strings should not overlap, as behavior is undefined.

* Parameters:
    * `dst`: The destination string
    * `src`: The string copied to `dst`
    * `len`: The number of characters to copy

* Return Value: `dst`


#### `char *ft_strnew(size_t size)`

* Allocates (with `malloc()`) and returns a “fresh” string with each character initialized to `\0` (one extra byte is allocated for NULL-termination of this string).

* Parameters:
    * `size:` The number of characters the string will contain

* Return Value: The new string


#### `int ft_strnequ(char const *str1, char const *str2, size_t n)`

* Lexicographical comparison between `str1` and `str2` up to `n` characters or until a `\0` is reached.

* Parameters:
    * `str1`: The string to compare to `str2`
    * `str2`: The string to compare to `str1`
    * `n`: The maximum number of characters to compare

* Return Value: `1` if the two strings are identical; `0` otherwise.


#### `char *ft_strnstr(const char *haystack, const char *needle, size_t len)`

* Locates the first occurence of the NULL-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched. Characters that appear after a `\0` are not searched.

* Parameters:
    * `haystack`: The string to be searched
    * `needle`: The string we are looking for in `haystack`
    * `len`: The number of characters to compare

* Return Value: If `needle` is an empty string, `haystack is returned`. If needle occurs nowhere in `haystack`, `NULL` is returned; otherwise a pointer to the first character of the occurence of `needle` in `haystack` is returned.


#### `char *ft_strrchr(const char *str, int c)`

* Locates the last occurence of `c` (converted to a `char`) in the string pointed to by `str`. The terminating `\0` is considered to be part of the string.

* Parameters:
    * `str`: The string we are searching
    * `c`: The character we are looking for in `str`

* Return Value: A pointer to the located character, or `NULL` if it does not appear in the string.


#### `char *ft_strstr(const char *haystack, const char *needle)`

* Locates the first occurence of the NULL-terminated string `needle` in the string `haystack`. Characters that appear after a `\0` are not searched.

* Parameters:
    * `haystack`: The string to be searched
    * `needle`: The string we are looking for in `haystack`

* Return Value: If `needle` is an empty string, `haystack is returned`. If needle occurs nowhere in `haystack`, `NULL` is returned; otherwise a pointer to the first character of the occurence of `needle` in `haystack` is returned.


#### `char *ft_strtrim(const char *str, const char *set)`

* Allocates (with `malloc()`) and returns a copy of `str` with the characters specified in `set` removed from the beginning and the end of the string.

* Parameters:
    * `str`: The string to be trimmed
    * `set`: The reference set of characters to trim from `str`

* Return Value: The trimmed string. `NULL` if the allocation fails.


#### `char *ft_substr(const char *str, unsigned int start, size_t len)`

* Allocates (with `malloc()`) and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.

*  Parameters:
    * `str`: The string from which to create the substring
    * `start`: The start index of the substring in the string ’s’
    * `len`: The maximum length of the substring

* Return Value: The substring. `NULL` if the allocation fails.


#### `int ft_tolower(int c)`

* Converts a capital letter to the corresponding lowercase letter. The argument must be representable as an `unsigned char` or the value `EOF`.

* Parameters:
    * `c`: The character to make lowercase

* Return Value: If the argument is a capital letter, we return the corresponding lowercase letter. If not, `c` is returned.


#### `int ft_toupper(int c)`

* Converts a lowercase letter to the corresponding capital letter. The argument must be representable as an `unsigned char` or the value `EOF`.

* Parameters:
    * `c`: The character to capitalize

* Return Value: If the argument is a lowercase letter, we return the corresponding capital letter. If not, `c` is returned.

---

## Memory Manipulation

#### `void *ft_calloc(size_t count, size_t size)`

* Allocates (with `malloc()`) contiguously allocates enough space for `count` objects that are each `size` bytes of memory. The allocated memory is filled with bytes of value zero.

* Parameters:
    * `count`: The number of times to allocate `size` bytes of memory
    * `size`: The size of each block of memory we are allocating

* Return Value: A pointer to the beginning of the allocated block of memory. If allocation fails, `NULL` is returned.


#### `void *ft_memalloc(size_t size)`

* Allocates (with `malloc()`) and returns a “fresh” memory area. The memory allocated is initialized to 0.

* Parameters:
    * `size`: The number of bytes to allocate

* Return Value: A pointer to the beginning of the allocated memory. `NULL` if the allocation fails.


#### `void *ft_memccpy(void *dst, const void *src, int c, size_t n)`

* Copies bytes from `src` to `dst`. If `c` (converted to an `unsigned char`) occurs in `src`, the copy stops and a pointer to the byte after the copy of `c` in the string `dst` is returned. Otherwise, `n` bytes are copied, and a `NULL` pointer is returned.

* Parameters:
    * `dst`: The destination string
    * `src`: The source string
    * `c`: The character to check for
    * `n`: The number of bytes to copy


#### `void *ft_memcpy(void *dst, const void *src, size_t n)`

* Copies `n` bytes from the memory area `src` to the memory area `dst`. If `src` and `dst` overlap, behavior is undefined (use `ft_memmove()` instead).

* Parameters:
    * `dst`: The destination memory area
    * `src`: The source memory area
    * `n`: The number of bytes to copy

* Return Value: The original value of `dst`.


#### `void *ft_memchr(const void *str, int c, size_t n)`

* Locates the first occurence of `c` (converted to an `unsigned char`) in the string `str`. A maximum of `n` bytes are searched.

* Parameters:
    * `str`: The string to search
    * `c`: Converted to an unsigned char then searched for in `str`
    * `n`: The number 

* Return Value: A pointer to the byte located, or `NULL` if no byte exists within `n` bytes.


#### `int ft_memcmp(const void *str1, const void *str2, size_t n)`

* Compares the first `n` bytes of `str1` to `str2`.

* Parameters:
    * `str1`: String to compare to `str2`
    * `str2`: String to compare to `str1`
    * `n`: Number of bytes to compare

* Return Value: `0` if the strings are identical. If not, finds the first character differing in the two strings (including `\0`) and returns `str1[diff_spot] - str2[diff_spot]`. This comparison is done using unsigned characters.


#### `void ft_memdel(void **ap)`

* `free()`s `*ap` and sets it to NULL.

* Parameters:
    * `ap`: A pointer to the memory address to be freed

* Return Value: None


#### `void *ft_memmove(void *dst, const void *src, size_t len)`

* Copies `len` bytes from `src` to `dst`. The two may overlap; the copy is always done in a non-destructive manner.

* Parameters:
    * `dst`: The destination buffer
    * `src`: The source to copy from
    * `len`: The number of bytes to copy

* Return Value: The original value of `dst`


#### `void *ft_memset(void *b, int c, size_t len)`

* Writes `len` bytes of the value `c` (converted to an `unsigned char`) to the string `b`.

* Parameters:
    * `b`: The buffer we are writing to
    * `c`: The value (converted to an `unsigned char`) written to `b`
    * `len`: The number of times to write `c` to `b`

* Return Value: `b`


---

## Linked Lists
The following struct is used to represent a list and will be referenced throughout in this section:

```
typedef struct          s_list
{
        void            *content;
        struct s_list   *next;
}                       t_list;
```

#### `void ft_lstadd_back(t_list **alst, t_list *new)`

* Adds the link `new` to the end of a linked list.

* Parameters:
    * `alst`: The address of a pointer to the first link of the linked list
    * `new`: A pointer to the new link being appended to the linked list

* Return Value: None


#### `void ft_lstadd_front(t_list **alst, t_list *new)`

* Adds the link `new` to the beginning of a linked list.

* Parameters:
    * `alst`: The address of a pointer to the first link of the linked list
    * `new`: A pointer to the new link being prepended to the linked list

* Return Value: None


#### `void ft_lstclear(t_list **alst, void (*del)(void *))`

* Deletes and frees the given link and every successor to it, using the function `del` and `free()`.  `alst` and `*alst` are then set to `NULL`.

* Parameters:
    * `alst`: The address of a pointer to a link
    * `del`: The address of the function used to delete the content of a link

Return Value: None


#### `void ft_lstdelone(t_list *lst, void (*del)(void *))`

* Frees the memory of a link's `content` using the function `del`. The memory of `next` is not freed.

* Parameters:
    * `lst`: The link to free
    * `del`: The address of the fuction used to delete `lst`'s `content`

* Return Value: None


#### `t_list *ft_lstfind(t_list *lst, void *content)`

* Finds and returns a pointer to the first link in the linked list `*lst` whose `content` member is equal to the argument `content`.

* Parameters:
    * `lst`: The linked list we are searching
    * `content`: What we are searching for in `lst`

* Return Value: A pointer to the link whose `content` member is the argument `content`. If there is no link in the linked list where this occurs, we return `NULL`.


#### `int ft_lstins_after(t_list *oldlink, t_list *newlink)`

* Sets the link `oldlink`'s member `next` to point to `newlink`.

* Parameters:
    * `oldlink`: The link whose `next` member we want to change
    * `newlink`: The link we want `oldlink`'s `next` member to point to

* Return Value: If the operation is successful, return `1`. If `oldlink` is `NULL`, return `0`.


#### `void ft_lstiter(t_list *lst, void (*f)(void *))`

* Iterates through the linked list `lst` and applies the function `f` to the `content` of each link.

* Parameters:
    * `lst`: A pointer to the first link a linked list
    * `f`: The address of the function which we will apply to each link's `content`

* Return Value: None


#### `t_list *ft_lstlast(t_list *lst)`

* Returns the last link of a linked list.

* Parameters:
    * `lst`: A pointer to the first link of the linked list

* Return Value: The last link of `lst`


#### `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`

* Iterates through the linked list `lst` and applies the function `f` to the `content` of each link. Creates and returns a new list resulting of the successive applications of this function. The `del` function is used to delete the content of an element if allocation fails.

* Parameters:
    * `lst`: A pointer to the first link of the linked list
    * `f`: The function to apply to the `content` of each link in `lst`
    * `del`: Used to delete a link's `content` if allocation of a link fails

* Return Value: The new linked list. `NULL` if allocation fails.


#### `t_list *ft_lstnew(void *content)`

* Allocates (with `malloc()`) and returns a new link. The member `content` is initialized with the value of the parameter `content`. The member `next` is initialized to `NULL`.

* Parameters:
    * `content`: The data to create the link with

* Return Value: The new link.


#### `int ft_lstsize(t_list *lst)`

* Counts the number of links in a linked list.

* Parameters:
    * `lst`: A pointer to the first link of the linked list

* Return Value: The number of links in `lst`.


---


## Matrices
The following struct is used to represent a matrix and will be referenced throughout in this section:

```
typedef struct    s_matrix
{
        int       size[2];
        double    **content;
}                 t_matrix;
```

#### `t_matrix *ft_matcreate(int n_rows, int n_cols)`

* Allocates (using `malloc()`) a `struct s_matrix` which has `n_rows` rows and `n_cols` columns. Note that the first index of the `content` member represents the rows, and the second represents the column.

* Parameters:
    * `n_rows`: The number of rows
    * `n_cols`: The number of columns

* Return Value: A pointer to the newly allocated matrix. `NULL` is returned if allocation fails.


#### `void ft_matdestroy(t_matrix *matrix)`

* Frees (using `free()`) the `content` member of the matrix pointed to by `matrix` as well as `matrix` itself. Sets `matrix` to point to `NULL`.

* Parameters:
    * `matrix`: The `struct s_matrix` we want to delete

* Return Value: None


#### `double ft_matdet(t_matrix *matrix)`

* Computes and returns the determinant of the matrix `matrix`.

* Parameters:
    * `matrix`: The matrix whose determinant we seek

* Return Value: The determinant of `matrix`


#### `t_matrix *ft_matinverse(t_matrix *matrix)`

* Computes and returns the inverse of the matrix `matrix`. Note that `matrix` must be a square matrix (i.e. `n_rows == n_cols`).

* Parameters:
    * `matrix`: The matrix whose inverse we seek

* Return Value: The inverse of `matrix`. If `matrix` is not square, `NULL` is returned.


#### `t_matrix *ft_matmult(t_matrix *matrix1, t_matrix *matrix2)`

* Allocates (with `malloc()`) memory for a matrix for the result of `matrix1` times `matrix2` and returns the result of this operation. Note that if `matrix1` is an `n_rows1` by `n_cols1` matrix and `matrix2` is a `n_rows2` by `n_cols2` matrix, the result will be a `n_rows1` by `n_cols2` matrix (matrix multiplication does not commute).

* Parameters:
    * `matrix1`: The matrix on the left side of the operation
    * `matrix2`: The matrix on the right side of the operation

* Return Value: The result of `matrix1` times `matrix2`. If allocation for this result fails, `NULL` is returned.


#### `double ft_matnorm(t_matrix *matrix)`

* Computes and returns the norm of a vector (i.e. a `1` by `n_cols` or `n_rows` by `1` `struct s_matrix`). The norm is calculated as the square root of the sum of the square of each component.

* Parameters:
    * `matrix`: The vector whose norm we seek

* Return Value: If `matrix` is a vector, we return its norm; otherwise we return `NULL`.


#### `t_matrix *ft_mattranspose(t_matrix *matrix)`

* Allocates (with `malloc()`) memory for a matrix for the transpose of `matrix`. The transpose is defined such that `transpose->content[row][col]` = `matrix->content[col][row]`. Note that this means that if `matrix` is an `n` by `m` matrix, the returned value will be an `m` by `n` matrix.

* Parameters:
    * `matrix`: The matrix whose transpose we seek

* Return Value: The newly create matrix which is transpose of `matrix`. If allocation fails, `NULL` is returned.
