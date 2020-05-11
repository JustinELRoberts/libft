FUNCS = atoi bzero calloc isalnum isalpha isascii isdigit isprint itoa memalloc \
	memcpy memccpy memchr memcmp memdel memmove memset putchar putchar_fd \
	putendl putendl_fd putnbr putnbr_fd putnstr putnstr_fd putstr putstr_fd split \
	strcat strchr strclr strcmp strcpy strdel strdup strequ striter striteri strjoin \
	strlcat strlcpy strlen strmap strmapi strncat strncmp strncpy strnew strnequ \
	strnstr strrchr strstr strtrim substr tolower toupper \
	lstadd_back lstadd_front lstclear lstdelone lstfind \
	lstins_after lstiter lstlast lstmap lstnew lstsize \
	matcreate matdestroy matdet matinverse matmult matnorm mattranspose
WITH_PREFIX = $(addprefix ft_, $(FUNCS))
NAME = libft.a
PRECOMPILED = $(addsuffix .o, $(WITH_PREFIX))
#PRECOMPILED += get_next_line/get_next_line.o
FLAGS = -Wall -Werror -Wextra

.PHONY: all clean clean re

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: clean all

$(NAME): $(PRECOMPILED)
	ar -rc $(NAME) *.o

%.o: %.c
	gcc $(FLAGS) -c $<
