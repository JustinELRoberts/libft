FUNCS = atoi bzero isalnum isalpha isascii isdigit isprint itoa memalloc \
	 memccpy memchr memcmp memdel memmove memset putchar putchar_fd \
	putendl putendl_fd putnbr putnbr_fd putstr putstr_fd putnstr putnstr_fd strcat \
	strchr strclr strcmp strcpy strdel strdup strequ striter striteri strjoin \
	strlcat strlen strmap strmapi strncat strncmp strncpy strnequ strnew \
	strnstr strrchr strsplit strstr strsub strtrim tolower toupper \
	lstadd lstadd_head lstadd_tail lstdel lstdelone lstfind lstiter lstmap lstnew
WITH_PREFIX = $(addprefix ft_, $(FUNCS))
NAME = $(addsuffix .o, $(WITH_PREFIX))
FLAGS = -Wall -Werror -Wextra

.PHONY: all clean clean re

all: $(NAME)
	ar -rc libft.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: clean all

ft_atoi.o: ft_atoi.c ft_isdigit.o ft_strlen.o ft_strtrim.o ft_strsub.o
	gcc $(FLAGS) -c ft_atoi.c

ft_bzero.o: ft_bzero.c
	gcc $(FLAGS) -c ft_bzero.c

ft_isalnum.o: ft_isalnum.c ft_isalpha.o ft_isdigit.o
	gcc $(FLAGS) -c ft_isalnum.c

ft_isalpha.o: ft_isalpha.c
	gcc $(FLAGS) -c ft_isalpha.c

ft_isascii.o: ft_isascii.c
	gcc $(FLAGS) -c ft_isascii.c

ft_isdigit.o: ft_isdigit.c
	gcc $(FLAGS) -c ft_isdigit.c

ft_isprint.o: ft_isprint.c
	gcc $(FLAGS) -c ft_isprint.c

ft_itoa.o: ft_itoa.c ft_memalloc.o
	gcc $(FLAGS) -c ft_itoa.c

ft_memalloc.o: ft_memalloc.c
	gcc $(FLAGS) -c ft_memalloc.c

ft_memccpy.o: ft_memccpy.c ft_memcpy.o
	gcc $(FLAGS) -c ft_memccpy.c

ft_memchr.o: ft_memchr.c
	gcc $(FLAGS) -c ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	gcc $(FLAGS) -c ft_memcmp.c

ft_memcpy.o: ft_memcpy.c
	gcc $(FLAGS) -c ft_memcpy.c

ft_memdel.o: ft_memdel.c
	gcc $(FLAGS) -c ft_memdel.c

ft_memmove.o: ft_memmove.c
	gcc $(FLAGS) -c ft_memmove.c

ft_memset.o: ft_memset.c ft_strlen.o
	gcc $(FLAGS) -c ft_memset.c

ft_putchar.o: ft_putchar.c
	gcc $(FLAGS) -c ft_putchar.c

ft_putchar_fd.o: ft_putchar_fd.c
	gcc $(FLAGS) -c ft_putchar_fd.c

ft_putendl.o: ft_putendl.c ft_putchar.o ft_putstr.o
	gcc $(FLAGS) -c ft_putendl.c

ft_putendl_fd.o: ft_putendl_fd.c ft_putchar_fd.o ft_putstr_fd.o
	gcc $(FLAGS) -c ft_putendl_fd.c

ft_putnbr.o: ft_putnbr.c ft_putstr.o ft_putchar.o
	gcc $(FLAGS) -c ft_putnbr.c

ft_putnbr_fd.o: ft_putnbr_fd.c ft_putstr_fd.o ft_putchar_fd.o
	gcc $(FLAGS) -c ft_putnbr_fd.c

ft_putstr.o: ft_putstr.c ft_putchar.o
	gcc $(FLAGS) -c ft_putstr.c

ft_putstr_fd.o: ft_putstr_fd.c ft_putchar_fd.o
	gcc $(FLAGS) -c ft_putstr_fd.c

ft_putnstr.o: ft_putnstr.c ft_putchar.o
	gcc $(FLAGS) -c ft_putnstr.c

ft_putnstr_fd.o: ft_putnstr_fd.c ft_putchar_fd.o
	gcc $(FLAGS) -c ft_putnstr_fd.c

ft_strcat.o: ft_strcat.c ft_strlen.o
	gcc $(FLAGS) -c ft_strcat.c

ft_strchr.o: ft_strchr.c
	gcc $(FLAGS) -c ft_strchr.c

ft_strclr.o: ft_strclr.c
	gcc $(FLAGS) -c ft_strclr.c

ft_strcmp.o: ft_strcmp.c
	gcc $(FLAGS) -c ft_strcmp.c

ft_strcpy.o: ft_strcpy.c
	gcc $(FLAGS) -c ft_strcpy.c

ft_strdel.o: ft_strdel.c
	gcc $(FLAGS) -c ft_strdel.c

ft_strdup.o: ft_strdup.c ft_strlen.o ft_memalloc.o
	gcc $(FLAGS) -c ft_strdup.c

ft_strequ.o: ft_strequ.c ft_strcmp.o
	gcc $(FLAGS) -c ft_strequ.c

ft_striter.o: ft_striter.c
	gcc $(FLAGS) -c ft_striter.c

ft_striteri.o: ft_striteri.c
	gcc $(FLAGS) -c ft_striteri.c

ft_strjoin.o: ft_strjoin.c ft_strlen.o ft_memalloc.o
	gcc $(FLAGS) -c ft_strjoin.c

ft_strlcat.o: ft_strlcat.c ft_strlen.o
	gcc $(FLAGS) -c ft_strlcat.c

ft_strlen.o: ft_strlen.c
	gcc $(FLAGS) -c ft_strlen.c

ft_strmap.o: ft_strmap.c ft_strlen.o ft_memalloc.o
	gcc $(FLAGS) -c ft_strmap.c

ft_strmapi.o: ft_strmapi.c ft_strlen.o ft_memalloc.o
	gcc $(FLAGS) -c ft_strmapi.c

ft_strncat.o: ft_strncat.c ft_strlen.o
	gcc $(FLAGS) -c ft_strncat.c

ft_strncmp.o: ft_strncmp.c
	gcc $(FLAGS) -c ft_strncmp.c

ft_strncpy.o: ft_strncpy.c
	gcc $(FLAGS) -c ft_strncpy.c

ft_strnequ.o: ft_strnequ.c ft_strncmp.o
	gcc $(FLAGS) -c ft_strnequ.c

ft_strnew.o: ft_strnew.c ft_memalloc.o
	gcc $(FLAGS) -c ft_strnew.c

ft_strnstr.o: ft_strnstr.c ft_strcmp.o ft_strlen.o ft_strsub.o
	gcc $(FLAGS) -c ft_strnstr.c

ft_strrchr.o: ft_strrchr.c
	gcc $(FLAGS) -c ft_strrchr.c

ft_strsplit.o: ft_strsplit.c ft_strlen.o ft_strcmp.o ft_memalloc.o
	gcc $(FLAGS) -c ft_strsplit.c

ft_strstr.o: ft_strstr.c ft_strcmp.o ft_strlen.o ft_strsub.o
	gcc $(FLAGS) -c ft_strstr.c

ft_strsub.o: ft_strsub.c ft_memalloc.o
	gcc $(FLAGS) -c ft_strsub.c

ft_strtrim.o: ft_strtrim.c ft_strlen.o ft_strsub.o
	gcc $(FLAGS) -c ft_strtrim.c

ft_tolower.o: ft_tolower.c
	gcc $(FLAGS) -c ft_tolower.c

ft_toupper.o: ft_toupper.c
	gcc $(FLAGS) -c ft_toupper.c

ft_lstadd.o: ft_lstadd.c
	gcc $(FLAGS) -c ft_lstadd.c

ft_lstadd_head.o: ft_lstadd_head.c
	gcc $(FLAGS) -c ft_lstadd_head.c

ft_lstadd_tail.o: ft_lstadd_tail.c
	gcc $(FLAGS) -c ft_lstadd_tail.c

ft_lstdel.o: ft_lstdel.c ft_lstdelone.o
	gcc $(FLAGS) -c ft_lstdel.c

ft_lstdelone.o: ft_lstdelone.c
	gcc $(FLAGS) -c ft_lstdelone.c

ft_lstfind.o: ft_lstfind.c ft_strequ.o ft_strcmp.o
	gcc $(FLAGS) -c ft_lstfind.c

ft_lstins_after.o: ft_lstins_after.c
	gcc $(FLAGS) -c ft_lstins_after.c

ft_lstiter.o: ft_lstiter.c
	gcc $(FLAGS) -c ft_lstiter.c

ft_lstmap.o: ft_lstmap.c
	gcc $(FLAGS) -c ft_lstmap.c

ft_lstnew.o: ft_lstnew.c ft_memalloc.o
	gcc $(FLAGS) -c ft_lstnew.c

