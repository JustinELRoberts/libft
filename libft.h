/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:41:12 by jroberts          #+#    #+#             */
/*   Updated: 2020/05/11 12:42:09 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct		s_matrix
{
	int				size[2];
	double			**content;
}					t_matrix;

int					ft_atoi(char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int num);
void				ft_lstadd_back(t_list **alst, t_list *new_lst);
void				ft_lstadd_front(t_list **alst, t_list *new_lst);
void				ft_lstclear(t_list **alst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
t_list				*ft_lstfind(t_list *lst, void *content);
int					ft_lstins_after(t_list *oldlink, t_list *newlink);
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
t_matrix			*ft_matcreate(int n_rows, int n_cols);
void				ft_matdestroy(t_matrix *matrix);
double				ft_matdet(t_matrix *mat);
t_matrix			*ft_matinverse(t_matrix *matrix);
t_matrix			*ft_matmult(t_matrix *m1, t_matrix *m2);
double				ft_matnorm(t_matrix *matrix);
t_matrix			*ft_mattranspose(t_matrix *mat);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *d, const void *s, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void	**ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(const char *s);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr(int num);
void				ft_putnbr_fd(int num, int fd);
void				ft_putstr(const char *str);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putnstr(const char *str, int n);
void				ft_putnstr_fd(const char *str, int n, int fd);
char				**ft_split(const char *s, char c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
int					ft_strequ(const char *s1, const char *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(const char *s1, const char *s2);
size_t				ft_strlcat(char *s1, const char *s2, size_t dstsize);
size_t				ft_strlcpy(char *s1, const char *s2, size_t dstsize);
int					ft_strlen(const char *str);
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(
						const char *haystack, const char *needle, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strtrim(const char *str, const char *set);
char				*ft_substr(const char *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
