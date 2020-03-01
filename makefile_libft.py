# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile_libft_test.py                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroberts <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 11:19:05 by jroberts          #+#    #+#              #
#    Updated: 2020/03/01 13:13:37 by jroberts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

funcs = ["atoi", "bzero", "isalnum", "isalpha", "isascii", "isdigit", "isprint", "itoa", "memalloc", "memccpy", "memchr", "memcmp", "memcpy", "memdel", "memmove", "memset", "putchar", "putchar_fd", "putendl", "putendl_fd", "putnbr", "putnbr_fd", "putstr", "putstr_fd", "putnstr", "putnstr_fd", "strcat", "strchr", "strclr", "strcmp", "strcpy", "strdel", "strdup", "strequ", "striter", "striteri", "strjoin", "strlcat", "strlen", "strmap", "strmapi", "strncat", "strncmp", "strncpy", "strnequ", "strnew", "strnstr", "strrchr", "strsplit", "strstr", "strsub", "strtrim", "tolower", "toupper", "lstadd", "lstadd_head", "lstadd_tail", "lstdel", "lstdelone", "lstfind", "lstins_after", "lstiter", "lstmap", "lstnew"]

dependencies = {
    "ft_atoi": ["ft_isdigit", "ft_strlen", "ft_strtrim", "ft_strsub"],
    "ft_bzero": "",
    "ft_isalnum": ["ft_isalpha", "ft_isdigit"],
    "ft_isalpha": "",
    "ft_isascii": "",
    "ft_isdigit": "",
    "ft_isprint": "",
    "ft_itoa": ["ft_memalloc"],
    "ft_memalloc": "",
    "ft_memccpy": ["ft_memcpy"],
    "ft_memchr": "",
    "ft_memcmp": "",
    "ft_memcpy": "",
    "ft_memdel": "",
    "ft_memmove": "",
    "ft_memset": ["ft_strlen"],
    "ft_putchar": "",
    "ft_putchar_fd": "",
    "ft_putendl": ["ft_putchar", "ft_putstr"],
    "ft_putendl_fd": ["ft_putchar_fd", "ft_putstr_fd"],
    "ft_putnbr": ["ft_putstr", "ft_putchar"],
    "ft_putnbr_fd": ["ft_putstr_fd", "ft_putchar_fd"],
    "ft_putstr": ["ft_putchar"],
    "ft_putstr_fd": ["ft_putchar_fd"],
    "ft_putnstr": ["ft_putchar"],
    "ft_putnstr_fd": ["ft_putchar_fd"],
    "ft_strcat": ["ft_strlen"],
    "ft_strchr": "",
    "ft_strclr": "",
    "ft_strcmp": "",
    "ft_strcpy": "",
    "ft_strdel": "",
    "ft_strdup": ["ft_strlen", "ft_memalloc"],
    "ft_strequ": ["ft_strcmp"],
    "ft_striter": "",
    "ft_striteri": "",
    "ft_strjoin": ["ft_strlen", "ft_memalloc"],
    "ft_strlcat": ["ft_strlen"],
    "ft_strlen": "",
    "ft_strmap": ["ft_strlen", "ft_memalloc"],
    "ft_strmapi": ["ft_strlen", "ft_memalloc"],
    "ft_strncat": ["ft_strlen"],
    "ft_strncmp": "",
    "ft_strncpy": "",
    "ft_strnequ": ["ft_strncmp"],
    "ft_strnew": ["ft_memalloc"],
    "ft_strnstr": ["ft_strcmp", "ft_strlen", "ft_strsub"],
    "ft_strrchr": "",
    "ft_strsplit": ["ft_strlen", "ft_strcmp", "ft_memalloc"],
    "ft_strstr": ["ft_strcmp", "ft_strlen", "ft_strsub"],
    "ft_strsub": ["ft_memalloc"],
    "ft_strtrim": ["ft_strlen", "ft_strsub"],
    "ft_tolower": "",
    "ft_toupper": "",
    "ft_lstadd": "",
    "ft_lstadd_head": "",
    "ft_lstadd_tail": "",
    "ft_lstdel": ["ft_lstdelone"],
    "ft_lstdelone": "",
    "ft_lstfind": ["ft_strequ", "ft_strcmp"],
    "ft_lstins_after": "",
    "ft_lstiter": "",
    "ft_lstmap": "",
    "ft_lstnew": ["ft_memalloc"]
 }


for i, func in enumerate(funcs):
    funcs[i] = "ft_" + func

beginning = """\
FUNCS = atoi bzero isalnum isalpha isascii isdigit isprint itoa memalloc \\
\t memccpy memchr memcmp memdel memmove memset putchar putchar_fd \\
\tputendl putendl_fd putnbr putnbr_fd putstr putstr_fd putnstr putnstr_fd strcat \\
\tstrchr strclr strcmp strcpy strdel strdup strequ striter striteri strjoin \\
\tstrlcat strlen strmap strmapi strncat strncmp strncpy strnequ strnew \\
\tstrnstr strrchr strsplit strstr strsub strtrim tolower toupper \\
\tlstadd lstadd_head lstadd_tail lstdel lstdelone lstfind lstiter lstmap lstnew
WITH_PREFIX = $(addprefix ft_, $(FUNCS))
NAME = $(addsuffix .o, $(WITH_PREFIX))
FLAGS = -Wall -Werror -Wextra

.PHONY: all clean clean re

all: $(NAME)
\tar -rc libft.a *.o

clean:
\trm -f *.o

fclean: clean
\trm -f libft.a

re: clean all

"""


with open("Makefile", 'w') as f:
    f.write(beginning)
    for func in funcs:
        f.write(func + ".o: " + func + ".c") 
        for dep in dependencies[func]:
            f.write(" " + dep + ".o")
        f.write('\n')
        f.write("\t" + "gcc $(FLAGS) -c " + func + ".c")
#        for dep in dependencies[func]:
#            f.write(" " + dep + ".o")
        f.write('\n\n')
    f.close()
