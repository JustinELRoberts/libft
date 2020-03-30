FUNCS = atoi bzero isalnum isalpha isascii isdigit isprint itoa memalloc \
	memcpy memccpy memchr memcmp memdel memmove memset putchar putchar_fd \
	putendl putendl_fd putnbr putnbr_fd putstr putstr_fd putnstr putnstr_fd strcat \
	strchr strclr strcmp strcpy strdel strdup strequ striter striteri strjoin \
	strlcat strlen strmap strmapi strncat strncmp strncpy strnequ strnew \
	strnstr strrchr strsplit strstr strsub strtrim tolower toupper \
	lstadd lstadd_head lstadd_tail lstdel lstdelone lstfind lstiter lstmap lstnew \
	matcreate matdestroy matdet matinverse matmult mattranspose
WITH_PREFIX = $(addprefix ft_, $(FUNCS))
NAME = libft.a
PRECOMPILED = $(addsuffix .o, $(WITH_PREFIX))
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
